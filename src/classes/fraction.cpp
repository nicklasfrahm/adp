#include <iostream>
#include "fraction.h"

int main(void)
{
  // creates positive fraction
  Fraction positive_fraction(2, 4);
  positive_fraction.print();
  // prints: 1/2

  // create negative fraction
  Fraction negative_fraction(-2, -4);
  negative_fraction.print();
  // prints: 1/2

  // creates fraction with negative nominator
  Fraction negative_nominator(-2, 4);
  negative_nominator.print();
  // prints: -1/2

  // creates fraction with negative denominator
  Fraction negative_denominator(2, -4);
  negative_denominator.print();
  // prints: -1/2

  // add positive fraction
  Fraction add_positive_to_fraction(1, 2);
  add_positive_to_fraction.add(Fraction(1, 4));
  add_positive_to_fraction.print();
  // prints: 3/4

  // add negative fraction
  Fraction add_negative_to_fraction(1, 4);
  add_negative_to_fraction.add(Fraction(-1, 2));
  add_negative_to_fraction.print();
  // prints: -1/4

  // subtract positive fraction
  Fraction sub_positive_from_fraction(1, 4);
  sub_positive_from_fraction.sub(Fraction(1, 2));
  sub_positive_from_fraction.print();
  // prints: -1/4

  // subtract negative fraction
  Fraction sub_negative_from_fraction(1, 4);
  sub_negative_from_fraction.sub(Fraction(-1, 2));
  sub_negative_from_fraction.print();
  // prints: 3/4

  // multiply positive fraction
  Fraction mul_positive_with_fraction(1, 2);
  mul_positive_with_fraction.mul(Fraction(1, 2));
  mul_positive_with_fraction.print();
  // prints: 1/4

  // multiply negative fraction
  Fraction mul_negative_with_fraction(1, 2);
  mul_negative_with_fraction.mul(Fraction(-1, 2));
  mul_negative_with_fraction.print();
  // prints: -1/4

  // divide by positive
  Fraction div_by_positive_fraction(1, 4);
  div_by_positive_fraction.div(Fraction(1, 2));
  div_by_positive_fraction.print();
  // prints: 1/2

  // divide by negative fraction
  Fraction div_by_negative_fraction(1, 4);
  div_by_negative_fraction.div(Fraction(-1, 2));
  div_by_negative_fraction.print();
  // prints: -1/2

  // create new fractions and add
  Fraction add_fractions = add(Fraction(1, 2), Fraction(1, 4));
  add_fractions.print();
  // prints: 3/4

  // create new fraction and subtract
  Fraction sub_fractions = sub(Fraction(1, 2), Fraction(1, 4));
  sub_fractions.print();
  // prints: 1/4

  // create new fraction and multiply
  Fraction mul_fractions = mul(Fraction(1, 2), Fraction(1, 2));
  mul_fractions.print();
  // prints: 1/4

  // create new fraction and divide
  Fraction div_fractions = div(Fraction(1, 4), Fraction(1, 2));
  div_fractions.print();
  // prints: 1/2

  return 0;
}