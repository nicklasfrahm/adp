#include <iostream>
#include "counter.h"

using namespace std;

class Car
{
private:
  int speed = 0;
  int steer = 10;

public:
  int drive(void)
  {
    cout << speed << " " << steer << endl;
  }
};

int main(void)
{

  // initialize counter with value of 10
  Counter counter(10);

  // get value
  cout << "Counter value: " << counter.get() << endl;
  // prints: Counter value: 10

  // increment value
  counter.tick();
  cout << "Counter value: " << counter.get() << endl;
  // prints: Counter value: 11

  // decrement value
  counter.tock();
  cout << "Counter value: " << counter.get() << endl;
  // prints: Counter value: 10

  // set value
  counter.set(99);
  cout << "Counter value: " << counter.get() << endl;
  // prints: Counter value: 99

  // reset value
  counter.reset();
  cout << "Counter value: " << counter.get() << endl;
  // prints: Counter value: 0

  return 0;
}