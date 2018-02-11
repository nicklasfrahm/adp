#include <iostream>
#include "account.h"

using namespace std;

int main(void)
{
  // initialize account with saldo of 1000 and interest of 10
  Account account(1000, 10);

  // get saldo
  cout << "Saldo: " << account.get_saldo() << endl;
  // prints: Saldo: 1000

  // deposit money
  account.deposit(1000);
  cout << "Saldo: " << account.get_saldo() << endl;
  // prints: Saldo: 2000

  // withdraw money
  account.withdraw(1000);
  cout << "Saldo: " << account.get_saldo() << endl;
  // print: Saldo: 1000

  // add interest
  account.add_interest();
  cout << "Saldo: " << account.get_saldo() << endl;
  // print: Saldo: 1100

  // set saldo
  account.set_saldo(2000);
  cout << "Saldo: " << account.get_saldo() << endl;
  // print: Saldo: 2000

  return 0;
}