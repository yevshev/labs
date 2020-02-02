/*Name: ch04_01.c
 *Purpose: Prints reversed digits
 *Date: 1/29/15
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>

int main(void)
{
  int A, B;

  printf("Enter a two-digit number: ");

  scanf("%1d%1d", &A, &B);

  printf("The reversal is: %d%d\n", B, A);

  return 0;
} 
