#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int fib(int N)
{
  int x = 1, y = 1;

  if(N <= 2) {
    return 1;
  }

  for (int i = 1; i < N; ++i) {
    int z = x + y;
    x = y;
    y = z;
  }
  
  return x;
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

