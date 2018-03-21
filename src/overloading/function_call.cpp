#include <iostream>

using namespace std;

class Multiply
{
public:
  Multiply(int f) : factor(f) {}
  int operator()(int x) { return this->factor * x; }

private:
  int factor;
};

int main(void)
{
  Multiply twice(2);
  Multiply triple(3);

  cout << twice(5) << endl;
  cout << triple(5) << endl;

  return 0;
};