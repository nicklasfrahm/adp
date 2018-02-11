#include <iostream>
#include "box.h"

using namespace std;

int main(void)
{
  // initialize box
  Box box(10, 10, 10);

  // get box volume
  cout << "Volume: " << box.get_volume() << endl;
  // prints: Volume: 1000

  // get box surface
  cout << "Surface: " << box.get_surface() << endl;
  // prints: Surface: 600

  return 0;
}