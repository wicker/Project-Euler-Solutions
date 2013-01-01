/* Function definitions for all my functions used in Project Euler solutions.
 * Author: Jenner Hanni
 * Copyright 2012 under the MIT License, <jeh.wicker@gmail.com>
*/

#include "projecteuler.h"

// check_if_prime(i) returns a 0 if an integer is not
// divisible by any number besides 1 and itself.   

long int check_if_prime(long int i) {
  int j = 2;
  int k = 0;
  int not_prime = 0;

  for (j = 2; j < i - 1; j++)
  {
    k = i % j;
    if (k == 0)
       not_prime++;
  }

  if (not_prime == 0)
     return 1;
  else
     return 0;
}

// check_if_factor(number to check, possible integer) returns 0 if the
// possible integer is a factor of the number to check.

long int check_if_factor(long int num, long int possible) {
  int temp;
  temp = num % possible;

  if (temp == 0)
    return 0;
  else 
    return 1;
}

// list all prime factors of the passed variable 'num'

long int list_all_factors(long int num) {
  int i;
  int count = 1;

  for (i = 2; i < num; i++)
  {
      if (check_if_factor(num, i) == 0)
      {
         ARRAY[count] = i;
         count++;
      }
  }
  return 0;
}
