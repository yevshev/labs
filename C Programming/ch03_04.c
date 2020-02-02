/*
Name: ch03_04.c
Purpose: formats telephone number
Date: 1/22/15
Author: Yevgeniy Shevekhman
*/
#include <stdio.h>

int main(void)
{
  int NUM1, NUM2, NUM3;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d)%d-%d", &NUM1, &NUM2, &NUM3);

  printf("You entered %d.%d.%d\n", NUM1, NUM2, NUM3);

  return 0;
}
