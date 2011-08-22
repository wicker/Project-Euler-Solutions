/* Author: Jen Hanni
 * Problem 1
 * Language: C
 */

#include <stdio.h>

void main(void)
{
  int count = 1;
  int sum = 0;

  while (count < 1000)
  {
    if (count % 3 == 0 || count % 5 == 0)
    {
        sum = sum + count;
        count++;
    }
    else 
    {
        count++;
    }
  }
  printf("%d\n",sum);
}
