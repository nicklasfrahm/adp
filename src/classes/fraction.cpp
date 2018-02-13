#include <iostream>
#include "fraction.h"

int main(void)
{
  // create new fraction
  Fraction positive_fraction(-2, -4);

  // print fraction
  positive_fraction.print();
  // prints: 1/2

  // create new fraction
  Fraction negative_fraction(-2, -4);

  // print fraction
  negative_fraction.print();
  // prints: 1/2

  // create new fraction
  Fraction negative_nominator(-2, 4);

  // print fraction
  negative_nominator.print();
  // prints: -1/2

  // create new fraction
  Fraction negative_denominator(2, -4);

  // print fraction
  negative_denominator.print();
  // prints: -1/2

  // create new fraction
  Fraction add_positive_to_fraction(1, 2);

  // add positive fraction to fraction
  add_positive_to_fraction.add(Fraction(1, 4));

  // print fraction
  add_positive_to_fraction.print();
  // prints: 3/4

  // create new fraction
  Fraction add_negative_to_fraction(1, 4);

  // add negative fraction to fraction
  add_negative_to_fraction.add(Fraction(-1, 2));

  // print fraction
  add_negative_to_fraction.print();
  // prints: -1/4

  // create new fraction
  Fraction sub_positive_from_fraction(1, 4);

  // subtract positive fraction from fraction
  sub_positive_from_fraction.sub(Fraction(1, 2));

  // print fraction
  sub_positive_from_fraction.print();
  // prints: -1/4

  // create new fraction
  Fraction sub_negative_from_fraction(1, 4);

  // subtract negative fraction from fraction
  sub_negative_from_fraction.sub(Fraction(-1, 2));

  // print fraction
  sub_negative_from_fraction.print();
  // prints: 3/4

  // create new fraction
  Fraction mul_positive_with_fraction(1, 2);

  // multiply positive fraction with fraction
  mul_positive_with_fraction.mul(Fraction(1, 2));

  // print fraction
  mul_positive_with_fraction.print();
  // prints: 1/4

  // create new fraction
  Fraction mul_negative_with_fraction(1, 2);

  // multiply negative fraction with fraction
  mul_negative_with_fraction.mul(Fraction(-1, 2));

  // print fraction
  mul_negative_with_fraction.print();
  // prints: -1/4

  // create new fraction
  Fraction div_by_positive_fraction(1, 4);

  // divide by positive fraction fraction
  div_by_positive_fraction.div(Fraction(1, 2));

  // print fraction
  div_by_positive_fraction.print();
  // prints: 1/2

  // create new fraction
  Fraction div_by_negative_fraction(1, 4);

  // divide by negative fraction fraction
  div_by_negative_fraction.div(Fraction(-1, 2));

  // print fraction
  div_by_negative_fraction.print();
  // prints: -1/2

  return 0;
}