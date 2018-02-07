#include <iostream>
#include "adder.h"

using namespace std;

int main(void)
{
  // initialize adder with value of 10
  Adder adder(10);

  // get initial value
  cout << "Adder value: " << adder.get() << endl;
  // prints: Adder value: 10

  // add value
  adder.add(10);
  cout << "Adder value: " << adder.get() << endl;
  // prints: Adder value: 20

  // reset value
  adder.reset();
  cout << "Adder value: " << adder.get() << endl;
  // prints: Adder value: 0

  // set value
  adder.set(99);
  cout << "Adder value: " << adder.get() << endl;
  // prints: Adder value: 99

  return 0;
}