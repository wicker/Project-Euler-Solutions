/* Author: Jenner Hanni
 * Copyright 2012, MIT License. <jeh.wicker@gmail.com>
 * Problem 8
 * Read in a text file containing a 1000-digit number and find the 
 * largest product of five consecutive digits.
 * Language: C
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

#define ARGS 2
#define SIZE 1001

int instructions();

int main(int argc, char *argv[]) {

  if (argc != ARGS) {
     return instructions();
  }

  char str[SIZE];
  int i,j,a,b,c,d,e;
  int product = 1;
  int winner = 1;
  char test[5];

  FILE *fp = fopen(argv[1], "r");
  fgets(str, SIZE, fp); 

  // increment the starting digit i
  // copy the five digits starting at i to the variable test
  // find product of the five digits in test
  // compare product to existing largest product and update if needed
  // finish checking entire string and print result

  for (i = 0; i < SIZE - 5; i++)
  {
      strncpy(test,str+i,5);
      test[5] = '\0';

      a = test[0] - '0';
      b = test[1] - '0';
      c = test[2] - '0';
      d = test[3] - '0';
      e = test[4] - '0';
      product = a * b * c * d * e;

      printf("a: %d b: %d test: %s product: %d winner: %d\n",a,b,test,product,winner);
      
      if (product > winner)
          winner = product;
      product = 1;
  }

  printf("winner: %d\n",winner);
  return 0;

}

int instructions() {
  printf("\n \
         Usage: ./prob8 inputfile\n");
}
