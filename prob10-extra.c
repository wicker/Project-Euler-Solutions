// Project Euler #10

#include <stdio.h>
#include <stdlib.h>

#define YES 0
#define NO 1
#define ERROR -1

#define UNKNOWN 0
#define PRIME 1
#define NOTPRIME 2

void print_all_primes(unsigned int max);
short is_it_prime(unsigned int num);

// this works for unsigned ints
// 0 <= num <= 2,147,483,647
short is_it_prime(unsigned int num) {
  unsigned int i;
  if (num < 2) return NOTPRIME;
  else if (num == 2) return PRIME;

  for (i = 2; i < num; i++) {
    if (num % i == 0) {
      return NOTPRIME;
    }
  }
  return PRIME;
}

// print all the primes for a number
void print_all_primes(unsigned int max) {

  unsigned int i,inc;
  short *ptr = calloc (max, sizeof(short*));

  for (i = 2; i <= max; i++) {
    if (ptr[i] == UNKNOWN) {
      ptr[i] = is_it_prime(i);
      inc = i;
      while (i <= max) {
        i += inc;
        ptr[i] = NOTPRIME;
      }
      i = inc;
    }
  }

  // print all of it
  for (i = 2; i <= max; i++) {
    if (ptr[i] == PRIME)
      printf("%d\n",i);
  }

}

void find_sum_of_primes(unsigned int max) {
  unsigned sum,t;
  sum = 0;

  printf("find sum of primes below: ");
  scanf("%d",&max);

  for (t = 1; t <= max; t++) {
    if (is_it_prime(t) == YES)
      sum += t;
  }

  printf("sum = %d\n",sum);
}

int main(int argc, char* argv[]) {

  print_all_primes(atoi(argv[1]));

  return 0;
}
