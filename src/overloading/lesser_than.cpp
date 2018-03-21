#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Dog
{
public:
  Dog(string n) : name(n) {}
  string get_name(void) const { return this->name; }

private:
  string name;
};

bool operator<(Dog a, Dog b)
{
  return a.get_name() < b.get_name();
};

int main(void)
{
  Dog pluto("Pluto");
  Dog fido("Fido");

  cout << min(pluto, fido).get_name() << endl;

  return 0;
}