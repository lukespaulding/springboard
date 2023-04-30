#include <atomic>
#include <condition_variable>
#include <iostream>
#include <mutex>
#include <queue>
#include <random>
#include <thread>

#include <catch2/catch_test_macros.hpp>

using namespace std;

void produce(
    size_t id,
    std::mutex &cout_mutex,
    std::condition_variable &cv,
    std::queue<size_t> &queue,
    std::mutex &queue_mutex,
    size_t num_to_produce,
    std::atomic_size_t &num_produced)
{
  mt19937_64 eng{random_device{}()};
  uniform_int_distribution<> producer_delay_dist__msec{100, 1000};
  uniform_int_distribution<> consumer_delay_dist__msec{500, 5000};

  for (size_t idx = 0; idx < num_to_produce; ++idx)
  {
    {
      lock_guard lg(cout_mutex);
      cout << "P" << id << ": working..." << endl;
    }

    this_thread::sleep_for(chrono::milliseconds(producer_delay_dist__msec(eng)));
    size_t msec = consumer_delay_dist__msec(eng);

    {
      lock_guard lg(cout_mutex);
      cout << "P" << id << ": pushing " << msec << endl;
    }

    {
      lock_guard lg(queue_mutex);
      queue.push(msec);
      cv.notify_one();
    }

    num_produced++;
  }
}

void consume(
    size_t id,
    std::mutex &cout_mutex,
    std::condition_variable &cv,
    std::queue<size_t> &queue,
    std::mutex &queue_mutex,
    std::atomic_bool &done,
    std::atomic_size_t &num_consumed)
{
  while (!done)
  {
    unique_lock<std::mutex> lk(queue_mutex);
    cv.wait(lk, [&queue, &done]
            { return !queue.empty() || done; });

    if (!queue.empty())
    {
      size_t msec = queue.front();
      queue.pop();
      lk.unlock();

      {
        lock_guard lg(cout_mutex);
        cout << "C" << id << ": popped " << msec << endl;
        cout << "C" << id << ": working..." << endl;
      }
      this_thread::sleep_for(chrono::milliseconds(msec));
      num_consumed++;
    }
    else
    {
      lk.unlock();
    }
  }

  {
    lock_guard lg(cout_mutex);
    cout << "C" << id << ": exiting..." << endl;
  }
}

TEST_CASE("producer/consumer example")
{
  size_t const N_to_produce = 10;
  size_t const N_producers = 2;
  size_t const N_consumers = 5;

  std::mutex cout_m;
  std::condition_variable cv;

  std::queue<size_t> q;
  std::mutex q_m;

  std::atomic_size_t N_produced = 0;
  std::atomic_size_t N_consumed = 0;
  std::atomic_bool done = false;

  cout << "main: starting consumers" << endl;
  vector<thread> consumers;
  for (size_t idx = 0; idx < N_consumers; ++idx)
  {
    consumers.emplace_back(
        consume,
        idx,
        ref(cout_m),
        ref(cv),
        ref(q),
        ref(q_m),
        ref(done),
        ref(N_consumed));
  }

  cout << "main: starting producers" << endl;
  vector<thread> producers;
  for (size_t idx = 0; idx < N_producers; ++idx)
  {
    producers.emplace_back(
        produce,
        idx,
        ref(cout_m),
        ref(cv),
        ref(q),
        ref(q_m),
        N_to_produce,
        ref(N_produced));
  }

  cout << "main: joining producers" << endl;
  for (auto &t : producers)
  {
    t.join();
  }

  done = true;
  cv.notify_all();

  cout << "main: joining consumers" << endl;
  for (auto &t : consumers)
  {
    t.join();
  }

  REQUIRE(N_produced == N_to_produce * N_producers);
  REQUIRE(N_produced == N_consumed);
}
