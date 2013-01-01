/* Author: Jenner Hanni
 * Copyright 2012, MIT License. <jeh.wicker@gmail.com>
 * Problem 9
 * Find the one Pythagorean triplet for which a + b + c = 1000.
 * Return the product a*b*c.
 * Language: C
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

#define ARGS 2
#define SIZE 1001

int main() {

  int a,b,c,sum,flag,i;
  char a_array[1000];
  char b_array[1000];
  char c_array[1000];
  flag = 0;
  i = 0;
  int a_square,b_square,c_square,test,mult;

  // walk through all values of a, b, and c to find which form a pythagorean triplet

  // walk through all values of a, b, and c to find which combinations equal 1000
  // 25 + 16 + 9 = 50

  for (a = 1; a < 1000; a++)
  {
      for (b = 1; b < 1000; b++)
      {
          for (c = 1; c < 1000; c++)
          {
              a_square = pow(a,2);
              b_square = pow(b,2);
              c_square = pow(c,2);
              test = a_square + b_square;
 
              if (c_square == test)
              {
                  printf("found a triplet! %d + %d = %d\n",a_square,b_square,c_square); 
                  sum = a + b + c;
                  if (sum == 1000)
                  {
                     printf("%d + %d + %d = 1000\n",a,b,c);
                     mult = a * b * c;
                     printf("mult: %d\n",mult);
                     return 0;
                  }
              }

/*              sum = a + b + c;
              if (sum == 1000)
              {
                 a_array[i] = a;
                 b_array[i] = b;
                 c_array[i] = c;
                 if (i < 1000)
                    i++;
                 else 
                    printf("too small of an array.");

              }*/
          }
      }
  }

  return 0;

}
