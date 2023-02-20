#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
////////////////////////////////////
// INCLUDE NECESSARY HEADERS HERE //
////////////////////////////////////


using namespace std;

void print_vector (const vector<int>& v);

void test_algorithms (int N)
{
  //////////////////////////////
  // CREATE A VECTOR v OF int //
  // WITH SIZE N              //
  // FILLED WITH ZEROS        //
  //////////////////////////////
  vector<int> v(N);

  print_vector(v);

  ///////////////////////////////
  // USE iota TO FILL v        //
  // WITH VALUES STARTING AT 5 //
  ///////////////////////////////
  iota(begin(v), end(v), +5);

  print_vector(v);

  ///////////////////////////////////////
  // USE reverse TO REVERSE THE VALUES //
  // BETWEEN THE THIRD AND FIFTH FROM  //
  // LAST POSITIONS                    //
  ///////////////////////////////////////
  reverse(end(v) -5, end(v) - 3);

  print_vector(v);

  /////////////////////////////////////
  // USE fill TO FILL THE FIRST FOUR //
  // VALUES WITH 20s                 //
  /////////////////////////////////////
  fill(begin(v), begin(v) + 4, 20);

  print_vector(v);

  ////////////////////////////////////////
  // USE sort TO SORT ALL BUT THE FIRST //
  // AND LAST VALUES                    //
  ////////////////////////////////////////
  sort(begin(v) + 1, end(v) - 1);

  print_vector(v);

  ///////////////////////////////////////////
  // USE sort WITH A COMPARISON LAMBDA     //
  // TO SORT ALL EVEN NUMBERS TO THE       //
  // FRONT AND ALL ODD NUMBERS TO THE BACK //
  ///////////////////////////////////////////
  sort(begin(v), end(v), [](const int& a, const int&b) -> bool {
    if((a%2) == 0) {
      return true;
    } else {
      return false;
    }
  });


  print_vector(v);
}

int main ()
{
  test_algorithms(15);
}

void print_vector (const vector<int>& v)
{
  cout << "v = ";
  for (auto& elem : v) {
    cout << elem << " ";
  }
  cout << endl;
}

