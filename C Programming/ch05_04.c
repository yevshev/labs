/*Name: ch05_04.c
 *Purpose: Calculates number of digits
 *Date: 1/29/15
 *Author: Yevgeniy Shevekhman
 */

#include<stdio.h>

int main(void)
{
  int X, NUM; 

  printf("Enter a number: ");

  scanf("%d", &X);

  if (X > 0 && X < 10)
    NUM = 1;

  if (X > 9 && X < 100) 
    NUM = 2; 

  if (X > 99 && X < 1000)
    NUM = 3;

  if (X > 999 && X < 10000)
    NUM = 4;

  printf("The number %d has %d digits\n", X, NUM); 

  return 0;
} 
