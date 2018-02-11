/*
 * Make a class Fraction, which have the private member-variables nominator and denominator .
 * We have 2 constructors: one with two parameters for initializing nominator and denominator,
 * and one with only one parameter for initializing the nominator (denominator is initialized to 1).
 * Make the member-function print (the fraction 1/2 is outputted like this: (1/2))
 * Make the member-functions increase_with, decrease_with, multiply_with and divide_with .
 * All these member-functions have an object of fraction as parameter. If the fraction a is 1/2 and
 * fraction b is 1/4 , then after the call of the member-function a.increase_with(b) we have the
 * new value of a to be 3/4 .
 * Make the member-function reduce. It must be private. It will reduce the fraction – for instance
 * (12/18) is reduced to (2/3). Use it in the end of all member-functions (remember the
 * constructors), which changes the nominator or denominator. (Hint: find greatest common
 * divisor like this: let i have the same value as the denominator. Test if i divides into the
 * nominator and the denominator. If not, decrease i and try again and so forth, until i divides into
 * the nominator and denominator. Divide the nominator and denominator with i. For instance: if
 * the nominator is 12 and the nominator is 18, then the following values of i are tested 12 11 10
 * 9 8 7 6. 6 divides into both and the fraction becomes (2/3) ).
 * Make the following functions (not member-functions) sum, difference, mul , div. They all
 * have two fractions as parameters and returns a fraction. You will need to add the member
 * functions get_nominator() and get_denominator() to your Fraction class. 
 */

#include <iostream>

class Fraction
{
private:
  int nominator;
  int denominator;
  void reduce(void);

public:
  Fraction(int n, int d);
  void print(void);
};

void Fraction::reduce(void)
{
  // reduce fraction
}

Fraction::Fraction(int n = 1, int d = 1) : nominator(n), denominator(d)
{
  this.reduce()
}

void Fraction::print(void)
{
  std::cout << '(' << nominator << '/' << denominator << ')' << std::endl;
}
