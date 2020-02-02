/*
Name: ch03_05.c
Purpose: prompts the user for 16 numbers, displays a 4 x 4 arrangement
         as well as the sums of the rows, columns, and diagonals.
Date: 1/22/15
Author: Yevgeniy Shevekhman
*/
#include <stdio.h>

int main(void)
{
  int A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P;
  int ROW1, ROW2, ROW3, ROW4;
  int COL1, COL2, COL3, COL4;
  int DIA1, DIA2;

  printf("Enter the numbers 1 to 16 in any order: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &A, &B, &C, &D, &E,
  &F, &G, &H, &I, &J, &K, &L, &M, &N, &O, &P);

  printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",
  A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P);

  ROW1 = A + B + C + D;
  ROW2 = E + F + G + H;
  ROW3 = I + J + K + L;
  ROW4 = M + N + O + P;

  COL1 = A + E + I + M;
  COL2 = B + F + J + N;
  COL3 = C + G + K + O;
  COL4 = D + H + L + P;
  DIA1 = A + F + K + P;
  DIA2 = D + G + J + M;

  printf("Row sums: %d %d %d %d\n", ROW1, ROW2, ROW3, ROW4);
  printf("Column sums: %d %d %d %d\n", COL1, COL2, COL3, COL4);
  printf("Diagonal sums: %d %d\n", DIA1, DIA2);

  return 0;
}
