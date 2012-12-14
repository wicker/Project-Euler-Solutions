/* Function definitions for all my functions used in Project Euler solutions.
 * Author: Jenner Hanni
 * Copyright 2012 under the MIT License, <jeh.wicker@gmail.com>
*/

#include <project-euler.h>

// check_if_prime(int i) returns a 0 if an integer is not
// divisible by any number besides 1 and itself.   

int check_if_prime(int i) {
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
     return 0;
  else
     return 1;
}

