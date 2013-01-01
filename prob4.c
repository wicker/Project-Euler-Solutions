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
//char * reverse(char *s);

int main()
{

  int count1;
  int count2;
  int result = 0;
  int flag = 0;

  for (count1 = 999; count1 > 0; count1--)
  {
      for (count2 = 999; count2 > 0; count2--)
      {
           printf("count1: %d  count2: %d   result: %d\n",count1,count2,result);
           result = count1 * count2;
          if (palindrome(result) == 0)
          {
             flag = 1;
             break; 
          }
      }
      if (flag == 1)
         break;
  }

  printf("result: %d\n",result);

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
  printf("num: %d\n",num);

  char str[ENOUGH];
  char rev[ENOUGH];

  snprintf(str, 8, "%d", num);
  len = strlen(str);
 
  for (i = 0, j = len - 1; i < len; i++, j--)
  {
    rev[j] = str[i];
  }
  printf("str: %s\n",str);
  for (i = 0; i < len; i++)
      printf("%c ",rev[i]);
  printf("\n");
  printf("rev: %s\n",rev);
  printf("ENOUGH: %lu\n",ENOUGH);

  if (strcmp(str, rev) == 0)
     return 0;
  else 
     return 1;
}

// reverse a string from K&R
/*
char * reverse(char *s)
{
  int len = strlen(s);
  int c, i, j;

  for (i = 0, j = len - 1; i < j; i++, j--)
  {
      c = s[i];
      s[i] = s[j];
      s[j] = c;
  }

  return s;
}

*/
