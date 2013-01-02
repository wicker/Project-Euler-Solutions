/* Author: Jenner Hanni
 * Copyright 2012, MIT License. <jeh.wicker@gmail.com>
 * Problem 10
 * Find the sum of all primes below two million
 * Language: C
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

int check_if_prime(int);

int main() {

  int num;
  int sum = 0;

  for (num = 0; num < 2000001; num++)
  {
      if (check_if_prime(num) == 0)
         sum = sum + num;
  }

  printf("numbers checked: %d\nsum: %d\n",num,sum);

  return 0;

}

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

