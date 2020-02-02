/*
Name: ch02_07.c
Purpose: calculate smallest number of bills
Date: 1/22/15
Author: Yevgeniy Shevekhman
*/
#include <stdio.h>

int main(void)
{
  int total = 0;
  int twenties = 0;
  int tens = 0;
  int fives = 0;
  int ones = 0;

  printf("Enter a Dollar amount: ");
  scanf("%d", &total);

  twenties = (total / 20);
  total = (total % 20);
  tens = (total / 10);
  total = (total % 10);
  fives = (total / 5);
  ones = (total % 5);

  printf("$20 bills: %d\n$10 bills: %d\n", twenties, tens);
  printf("5 bills: %d\n$1 bills: %d\n", fives, ones);

  return 0;

}
