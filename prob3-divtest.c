/* Author: Jenner Hanni
 * Copyright 2012, MIT License. <jeh.wicker@gmail.com>
 * Problem 3
 * largest prime factor of the number 600851475143?
 * Implementing the divisibility tests
 * Language: C
 */

#include <stdio.h>
#include <math.h>

#define ARGS 2

int instructions();
int check_if_prime(unsigned long int);
int check_if_factor(unsigned long int, unsigned long int);

int main(int argc, char **argv[])
{

  char *input = argv[1];
  int length;

  if (argc != ARGS) {
     return instructions();
  }

  input = argv[1];
  length = strlen(input);
  printf("input is %s with length %d.\n",input,length);
  printf("i[0] = %c,\n",input[0]);

  int test = 0;
  int sum = 0;
  int i = 0;
  char temp = 0;

  // div test 2- test whether last digit is divisible by two
  test = input[11] % 2;
  if (test == 0)
     printf("fails div test 1. not prime.\n");

  // div test 3 - test whether sum of digits is divisible by three
  for (i = 0; i < length; i++)
  {
      temp = input[i];
      temp = atoi(&temp);
      sum = sum + temp;
      printf("current digit %d and current sum %d\n",temp,sum);
  }
  test = sum % 3;
  if (test == 0)
     printf("the sum %d is divisible by three.\n",sum);
  else
     printf("the sum %d is not divisible by three.\n",sum);

  // div test 4 - test whether the last two digits are divisible by 4

  // div test 5 - test whether last digit is 0 or 5

  // div test 6 - even and sum of digits divisible by 2 or 3
  // satisfied by tests for 2 and 3

  // div test 7 - just divide by 7
  // or take two left most digits, multiple left by 3 and add to the second
  // then replace these two with the result etc etc.

  // div test 8 - test whether last three digits are divisible by 8

  // div test 9 - test whether the sum of digits is divisible by 9
  // satisfied by test for 3

  // div test 10 - last digit is 0
  // satisfied by test for 5

  // div test 11 - test whether difference between sum of odd digits
  // and sum of even digits is divisible by 11

}

int instructions() {
  printf("Usage ./prob3 <integer>\nThis function returns all primes.\n");
}

