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

#define MAX 11

int check_if_prime(int);

void mark_all_primes(int, int *);

int main() {

  // make a list to hold the marks (1,0) for each number, using the index
  // 0 = prime
  // 1 = not prime
  // the list is initialized with all 0 and every composite number then marked 

  int p,i; 
  int numbers[MAX];
  int *ptr;
  ptr = numbers;

  int num, base;

  // set the entirety of numbers to zero
  for (p = 0; p < MAX; p++)
      numbers[p] = 0;

  // starting with number two, walk through all numbers and mark as not prime
  for (i = 2; i < MAX; i++)
  {
      mark_all_primes(i, ptr);
      printf("all nums divisible by %d are now labeled 1.\n",i);
  for (p = 0; p < MAX; p++)
      printf("num: %d is %d\n",p,numbers[p]);
  }


//  printf("sum: %d\n",sum);

  return 0;

}

// check_if_prime(int i) returns a 0 if an integer is not
// divisible by any number besides 1 and itself.   

int check_if_prime(int numtocheck) {
  int testdigit = 2;
  int k = 0;
  int not_prime = 0;

  for (testdigit = 2; testdigit < MAX; testdigit++)
  {
    k = numtocheck % testdigit;
    printf("num: %d k: %d\n",numtocheck,testdigit);
    if (k == 0)
       {
       not_prime++;
       break;
       }
  }

  if (not_prime == 0)
     return 0;
  else
     return 1;
}

void mark_all_primes(int base, int *ptr) 
{
  int i;
  for (i = i + base; i < MAX; i = i + base)
  {
      ptr[i] = 1;
  }
}

/*
      base = i;
      for (x = i; x < MAX; x++)
          numbers[x] = 1;

 

       if (numbers[i] == 0) // if we still think it might be prime
       {
          if (check_if_prime(i) == 1)
              numbers[i] = 1;
       }
  }


  for (p = 3; p < MAX; p++)
  {
    for (i = p; i < MAX; i = i + p)
    {
    }
  }

  int sum = 0;

  for (i = 2; i < NUMTOFIND; i++)
  {
      num = numbers[i]; 
      if (num == 0)
         sum = sum + i;
  }
*/

