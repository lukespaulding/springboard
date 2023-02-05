#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int fib(int N)
{
  //exit case so that the program does not loop infinitely.
  if (N <= 1) {
    return N;
  }
  //recursive call which follows fibonacci sequence
  return fib(N - 1) + fib(N-2);
}

int main ()
{
  for (int N=0; N<45; ++N)
  {

    auto start = chrono::high_resolution_clock::now();

    int f = fib(N);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();

    cout << "N=" << setw(2) << N << " "
         << "F(N)=" << setw(10) << f << " "
         << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
  }

  return 0;
}

