/* Author: Jenner Hanni
 * Copyright 2012, MIT License. <jeh.wicker@gmail.com>
 * Problem 6
 * Find the difference of the sum of the squares and the square of the sum.
 * Language: C
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  int i;
  int sum_of_squares = 0;
  int square_of_sums = 0;
  int diff;

  for (i = 1; i < 101; i++)
  {
      sum_of_squares = sum_of_squares + pow(i,2);
      square_of_sums = square_of_sums + i;
  }
  square_of_sums = pow(square_of_sums,2);
  diff = square_of_sums - sum_of_squares;

  printf("diff: %d\n",diff);
  return 0;

}
