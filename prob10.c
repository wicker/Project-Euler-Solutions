// Project Euler #10
// Find sum of primes below 2,000,000
// Compile with
// gcc -std=c99 prob10.c -o prob10 -lm

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ERROR -1

#define PRIME 0
#define NOTPRIME 1

void print_all_primes(unsigned int max);
short is_it_prime(unsigned int num);

// this works for unsigned ints
// 0 <= num <= 2,147,483,647
short is_it_prime(unsigned int num) {
  unsigned int i;
  unsigned long int actual = sqrt(num);

  if (num < 2) return NOTPRIME;
  else if (num == 2) return PRIME;

  for (i = 2; i <= actual+1; i++) {
    if (num % i == 0) {
      return NOTPRIME;
    }
  }
  return PRIME;
}

// print all the primes for a number
void print_all_primes(unsigned int max) {

  unsigned int i,inc;
  double sum;
  unsigned int actual = sqrt(max) - 1;
  short *ptr = calloc (max, sizeof(short*));

  for (i = 2; i <= max; i++) {
    ptr[i] = is_it_prime(i);
    inc = i;
    while (i <= max) {
      i += inc;
      ptr[i] = NOTPRIME;
    }
    i = inc;
  }

  sum = 0;
  for (i = 2; i <= max; i++) {
    if (ptr[i] == PRIME) 
      sum += i;
  }
  printf("sum: %.0f\n",sum);

  free(ptr);
}

int main(int argc, char* argv[]) {

  print_all_primes(atoi(argv[1]));

  return 0;
}
