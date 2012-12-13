/* Author: Jenner Hanni
 * Copyright 2012, MIT License. <jeh.wicker@gmail.com>
 * Problem 7
 * What is the 10 001st prime number?
 * Language: C
 */

#include <stdio.h>
#include <math.h>

#define WHICHPRIME 10001

int check_if_prime(int);

void main(void)
{

  int i = 2;
  int count = 0;
  int array[WHICHPRIME];

  while (count < WHICHPRIME)
  {
    if (check_if_prime(i) == 0)
    {
       printf("%d is a prime number.\n",i);
       count++;
       array[count] = i;
    }
    else
       printf("%d is not a prime number.\n",i);
    i++;
  }

  printf("Prime #%d is %d.\n",WHICHPRIME,array[count]);
//  printf("Prime #%d between 1 and %d is %d.\n",WHICHPRIME,TOTAL,array[WHICHPRIME]);
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

