/*Name: ch06_01.c
 *Purpose: Displays greatest number entered
 *Date: 02/05/2015
 *Author: Yevgeniy Shevekhman
 */

#include<stdio.h>

int main(void)
{
  int A, B, C, D, E, F, NUM;

  printf("Enter a number: ");
  scanf("%d", &A);

  printf("Enter a number: ");
  scanf("%d", &B);
 
  printf("Enter a number: ");
  scanf("%d", &C);
 
  printf("Enter a number: ");
  scanf("%d", &D);
  
  printf("Enter a number: ");
  scanf("%d", &E);

  printf("Enter a number: ");
  scanf("%d", &F);

  if (A > B && A > C && A > D && A > E && A > F)
    NUM = A;
  else if (B > A && B > C && B > D && B > E && B > F)
    NUM = B;
  else if (C > A && C > B && C > D && C > E && C > F)
    NUM = C;
  else if (D > A && D > B && D > C && D > E && D > F)
    NUM = D;
  else if (E > A && E > B && E > C && E > D && E > F)
    NUM = E;
  else if (F > A && F > B && F > C && F > D && F > E)
    NUM = F;

  printf("The largest number entered was %d\n", NUM);

  return 0;
}
