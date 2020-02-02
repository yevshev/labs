/*Name: ch05_05.c
 *Purpose: Finds the largest and smallest integers
 *Date: 1/29/15
 *Author: Yevgeniy Shevekhman
 */

#include<stdio.h>

int main(void)
{
  int A, B, C, D, LRG, SML; 
  
  printf("Enter four intgers: ");
  scanf("%d %d %d %d", &A, &B, &C, &D);

  if (A > B && A > C && A > D)
    LRG = A;

  if (B > A && B > C && B > D)
    LRG = B;

  if (C > A && C > B && C > D)
    LRG = C;

  if (D > A && D > B && D > C)
    LRG = D;

  if (A < B && A < C && A < D)
    SML = A;

  if (B < A && B < C && B < D)
    SML = B;

  if (C < A && C < B && C < D)
    SML = C;

  if (D < A && D < B && D < C)
    SML = D;

  printf("Largest: %d\nSmallest: %d\n", LRG, SML);

  return 0;
} 
