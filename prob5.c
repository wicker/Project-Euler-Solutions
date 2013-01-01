/* Author: Jenner Hanni
 * Copyright 2012, MIT License. <jeh.wicker@gmail.com>
 * Problem 5
 * Find the smallest number evenly divisible by all digits less than twenty
 * Language: C
 */

#include <stdio.h>
#include <math.h>
#include <string.h>


int instructions();
int divisibility_test(int);

int main()
{

  int num;
  num = 20;
  while (divisibility_test(num) == 1)
        num++;
  printf("Smallest num divisible by all digits under twenty: %d\n",num);

  return 0;

}

int instructions() 
{
  printf("Usage ./prob5 \n \
         This function returns the smallest number divisible by all digits less than twenty.\n");
}

// check if a given number is evenly divisible by all numbers less than twenty

int divisibility_test(int num)
{
  int i, test;
  for (i = 20; i > 1; i--)
  {   
      test = num % i; 
      if (test != 0)
         return 1;
  }
  return 0;
}

