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

  FILE *fp = fopen(argv[1], "r");
  fgets(str, SIZE, fp); 



  printf("str: %s\n",str);
  return 0;

}

int instructions() {
  printf("\n \
         Usage: ./prob8 inputfile\n");
}
