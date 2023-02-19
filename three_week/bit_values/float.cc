#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
  uint32_t x = 0;

  //////////////////////////
  // MANIPULATE BITS HERE //
  //////////////////////////
   
  //Negative numbers, so we need to manipulate the 31st bit. 
  x |= (1 << 31);
  //offset 
  //it should be 2^127, but I am having a rough time past that! Not sure I am going to get this one. 
  x |= (uint32_t(127)-5) << 24;
  x |= (1 << 23);
  x |- (1 << 22);

  float f = reinterpret_cast<float&>(x);
  cout << "x = " << x << endl;
  cout << "f = " << showpos << scientific << setprecision(8) << f << endl;
}

