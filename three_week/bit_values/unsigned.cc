#include <iostream>

using namespace std;

int main ()
{
  uint32_t x = 0;

  cout << "initially:" << endl;
  cout << "  x = " << x << endl;

  //the pattern is prime numbers! 
  x = x | (1 << 2);
  x = x | (1 << 3);
  x = x | (1 << 5);
  x = x | (1 << 7);
  x = x | (1 << 11);
  x = x | (1 << 13);
  x = x | (1 << 17);
  x = x | (1 << 19);
  x = x | (1 << 23);
  x = x | (1 << 29);
  x = x | (1 << 31);


  cout << "after setting bits:" << endl;
  cout << "  x = " << x << endl;

  x ^= (1 << 3);
  ///////////////////////
  // TOGGLE BIT 3 HERE //
  ///////////////////////

  cout << "after first bit 3 toggle:" << endl;
  cout << "  x = " << x << endl;

  x ^= (1 << 3);
  //////////////////////////////////////
  // REPEAT YOUR PREVIOUS ACTION HERE //
  //////////////////////////////////////

  cout << "after second bit 3 toggle:" << endl;
  cout << "  x = " << x << endl;

  x &= ~(1 << 7);
  //////////////////////
  // CLEAR BIT 7 HERE //
  //////////////////////

  cout << "after clearing bit 7:" << endl;
  cout << "  x = " << x << endl;

  for (int i = 16; i < 32; i++) {
    x &= ~(1 << i);
  }
  ///////////////////////////
  // CLEAR BITS 16-31 HERE //
  ///////////////////////////

  cout << "after clearing bits 16-31:" << endl;
  cout << "  x = " << x << endl;
}

