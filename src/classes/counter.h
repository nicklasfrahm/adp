/*
 * Make a class Counter. It has a private integer variable counter_value for holding the ticks.
 * It has 3 public member-functions. The member-function tick() increases the counter_value.
 * The member-function reset() sets counter_value to 0. The member-function get() returns the
 * counter_value. Declare some counter objects and try them out in your main-function.
 */

class Counter
{
private:
  int value = 0;

public:
  Counter(int n);
  void reset(void);
  void tick(void);
  void tock(void);
  int get(void);
  void set(int n);
};

Counter::Counter(int n) : value(n) {}

void Counter::reset(void)
{
  value = 0;
}

void Counter::tick(void)
{
  ++value;
}

void Counter::tock(void)
{
  --value;
}

int Counter::get(void)
{
  return value;
}

void Counter::set(int n)
{
  value = n;
}