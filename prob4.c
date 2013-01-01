/* Author: Jenner Hanni
 * Copyright 2012, MIT License. <jeh.wicker@gmail.com>
 * Problem 4
 * Find the largest palindrome made from the product of two 3-digit numbers
 * Language: C
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

#define CHARBIT 8
#define ENOUGH ((CHARBIT * sizeof(int) - 1) / 3 + 2)

int instructions();
int palindrome(int);

int main()
{

  int count1;
  int count2;
  int result = 0;
  int flag = 0;
  int winner = 0;
  for (count1 = 999; count1 > 0; count1--)
  {
      for (count2 = 999; count2 > 0; count2--)
      {
          result = count1 * count2;
          if (palindrome(result) == 0) 
          {
             printf("I found a palindrome: %d\n",result);
             if (result > winner) 
             {   winner = result;
                printf("Found a larger palindrome!\n");
             }
          }
      }
  }

  printf("winner: %d\n",winner);

  return 0;

}

int instructions() 
{
  printf("Usage ./prob4 \n \
         This function returns the largest palindrome made from two 3-digit numbers.\n");
}

// check if a given number is a palindrome

int palindrome(int num)
{
  char a;
  int i, j, len;

  char str[ENOUGH];
  char rev[ENOUGH];

  snprintf(str, 8, "%d", num);
  len = strlen(str);
 
  for (i = 0, j = len - 1; i < len; i++, j--)
  {
    rev[j] = str[i];
  }

  if (strcmp(str, rev) == 0)
     return 0;
  else 
     return 1;
}

