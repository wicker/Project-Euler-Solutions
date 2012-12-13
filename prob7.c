/* Author: Jenner Hanni
 * Copyright 2012, MIT License. <jeh.wicker@gmail.com>
 * Problem 7
 * What is the 10 001st prime number?
 * Language: C
 */

#include <stdio.h>
#include <math.h>

#define WHICHPRIME 4

int check_if_prime(int);

void main(void)
{

  int i = 2 ;
  int count = 0;

  int array[WHICHPRIME-1];

  while (count < WHICHPRIME)
  {
    if (check_if_prime(i) == 0) // i is prime if function returns 0
    {
       array[count] = i;
       count++;
    }
    i++;
  }

  printf("Prime #%d is %d.\n",WHICHPRIME,array[WHICHPRIME-1]);

}

int check_if_prime(int i) {
  int j;
  int not_prime;
  
  for (j = 2; j < i; j++)
  {
    if (i % j != 0)
    {
       not_prime++; // increment this for every number i is divisible by
       printf("not_prime: %d\n",not_prime);
    }
  }

  if (not_prime == 0) 
      return 0; // prime!
  else
      return 1; // not prime!
}

