/*
 * Make a class Account with saldo and interest as private members. Make constructors and
 * the member-functions deposit, withdraw, add_interest and get_saldo.
 */

class Account
{
private:
  int saldo;
  int interest;

public:
  Account(int s, int i);
  void add_interest();
  int get_saldo(void);
  void set_saldo(int n);
  void deposit(int n);
  void withdraw(int n);
};

Account::Account(int s = 0, int i = 0) : saldo(s), interest(i) {}

void Account::add_interest()
{
  saldo += saldo * interest / 100;
}

int Account::get_saldo(void)
{
  return saldo;
}

void Account::set_saldo(int n)
{
  saldo = n;
}

void Account::deposit(int n)
{
  saldo += n;
}

void Account::withdraw(int n)
{
  saldo -= n;
}