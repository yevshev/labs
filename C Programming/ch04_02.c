/*Name: Ch04_02.c
 *Purpose: Outputs octal number
 *Date: 1/29/15
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>

int main(void)
{
  int X, A, B, C, D, E;

  printf("Enter a number between 0 and 32767: ");

  scanf("%d", &X);

  E = X % 8; 
  X = X / 8; 
  D = X % 8; 
  X = X / 8; 
  C = X % 8; 
  X = X / 8; 

  B = X % 8; 
  X = X / 8; 
  A = X % 8; 

  printf("In octal, your number is: %d%d%d%d%d\n", A, B, C, D, E);

  return 0;
}

 

 
