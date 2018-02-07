/*
 * Make a class Adder. It has a private integer variable sum for holding the sum.
 * It has 3 public member-functions. The member-function add(int n) increases the sum. The
 * member-function reset_sum() sets sum to 0. The member-function get_sum() returns the sum.
 * Declare some adder objects and try them out in your main-function. 
 */

class Adder
{
private:
  int sum = 0;

public:
  Adder(int n);
  void add(int n);
  void reset(void);
  int get(void);
  void set(int n);
};

Adder::Adder(int n) : sum(n) {}

void Adder::add(int n)
{
  sum += n;
}

void Adder::reset(void)
{
  sum = 0;
}

int Adder::get(void)
{
  return sum;
}

void Adder::set(int n)
{
  sum = n;
}