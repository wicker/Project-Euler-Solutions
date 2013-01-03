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

#define MAX 2000001

void mark_divisible(int, int *);
void print_the_list(int, int *);

int main() {

  // make a list to hold the marks (1,0) for each number, using the index
  // 0 = prime
  // 1 = not prime
  // the list is initialized with all 0 and every composite number then marked 

  int i, numbers[MAX], *ptr;  
  long unsigned int sum;
  ptr = numbers;

  int num, base;

  // set every index in the list to the value zero
  for (i = 0; i < MAX; i++)
      numbers[i] = 0;

  // starting with number two, walk through all numbers
  for (i = 2; i < MAX; i = i + 1)
  {
      mark_divisible(i, ptr);
  }

  // print out a list of all primes
  for (i = 2; i < MAX; i++)
  {
      if (ptr[i] == 0)
         printf("%d ",i);
  }

  // sum all primes
  for (i = 2; i < MAX; i++)
  {
      if (ptr[i] == 0)
         sum = sum + i;
  }

  printf("sum: %lu\n",sum);

  return 0;

}

// given a list of numbers and a factor, mark with a 1 all the numbers 
// in that list, which are divisible by the given factor

void mark_divisible(int factor, int *ptr) 
{
  int i = factor;
  for (i = i + factor; i < MAX; i = i + factor)
  {
      ptr[i] = 1;
  }
}

// print the values of the entire list

void print_the_list(int i, int *ptr)
{
  for (i = 0; i < MAX; i++)
  {
     printf("num: %d is %d\n",i,ptr[i]);
  }
}
