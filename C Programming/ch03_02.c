/*
Name: ch03_02.c
Purpose: formats product information
Date: 1/22/15
Author: Yevgeniy Shevekhman
*/
#include <stdio.h>

int main(void)
{
  int ITEM, M, D, Y;
  float PRICE;

  printf("Enter item number: ");
  scanf("%d", &ITEM);

  printf("Enter Unit price: ");
  scanf("%f", &PRICE);

  printf("Enter purchase date (mm/dd/yy): ");
  scanf("%d/%d/%d", &M, &D, &Y);

  printf("\nItem\tUnit\tPurchase\n\tPrice\tDate\n");
  printf("%d\t$%.2f\t%d/%d/%d\n", ITEM, PRICE, M, D, Y);

  return 0;
}
