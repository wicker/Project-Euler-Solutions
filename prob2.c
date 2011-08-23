/* Author: Jen Hanni
 * Problem 2
 * Language: C
 */

#include <stdio.h>

void main(void)
{
  int term1 = 1;
  int term2 = 2;
  int sum = 2;
  int temp;

  while (term2 < 4000000)
  {
    temp = term1;
    term1 = term2;
    term2 = temp + term2;
    if (term2 % 2 == 0)
    {
       sum = sum + term2;
       printf("%d\n",sum);
    }
  }
  // printf("%d\n",sum);
}
