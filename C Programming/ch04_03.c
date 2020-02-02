/*Name: ch04_03.c
 *Purpose: Compute UPC check digit
 *Date: 1/29/15
 *AUthor: Yevgeniy Shevekhman
 */

#include<stdio.h>

int main(void)
{
  int A, B, C, D, E, F, G, H, I, J, K;

  int SUM1, SUM2, TOTAL; 


  printf("Enter the first 11 digits of a UPC: ");
 
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &A, &B, &C, &D, &E, &F, &G, &H, &I, &J, &K);

  SUM1 = A + C + E + G + I + K; 
  SUM2 = B + D + F + H + J; 
  
  TOTAL = 3 * SUM1 + SUM2; 
  TOTAL = TOTAL - 1; 
  TOTAL = TOTAL % 10; 
  TOTAL = 9 - TOTAL;
  
  printf("Check digit: %d\n", TOTAL);

  return 0;
} 


   
