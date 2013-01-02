/* Author: Jenner Hanni
 * Copyright 2012, MIT License. <jeh.wicker@gmail.com>
 * Problem 10
 * Find the sum of all primes below two million
 * Solving this with the Sieve of Eratosthenes
 * Language: C
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

#define NUMTOFIND 2000001

int check_if_prime(int);

int main() {

  // make a list to hold the marks (1,0) for each number, using the index
  // 0 = prime
  // 1 = not prime
  // the list is initialized with all 0 and every composite number then marked 

  int p,i; 
  char numbers[NUMTOFIND];

  int num;

  // set the entirety of numbers to zero
  for (p = 0; p < NUMTOFIND; p++)
      numbers[p] = 0;

  // starting with p = 2, walk through all numbers and mark as prime or not prime
  for (p = 2; p < NUMTOFIND; p++)
  {
    for (i = p; i < NUMTOFIND; i = i + p)
    {
       if (numbers[i] == 0) // if we still think it might be prime
       {
          if (check_if_prime(i) == 1)
              numbers[i] = 1;
       }
    }
  }

  int sum = 0;

  for (i = 0; i < NUMTOFIND; i++)
  {
      num = numbers[i]; 
      if (num == 0)
         sum = sum + i;
  }

  for (p = 0; p < NUMTOFIND; p++)
      printf("%d\n",numbers[p]);

  printf("sum: %d\n",sum);

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

