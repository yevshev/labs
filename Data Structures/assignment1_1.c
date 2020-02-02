/*Yevgeniy Shevekhman
  Assignment 1.1   */


#include <stdio.h>

void largest(int m, int n, int o);

int main(void)
{
  int x, y, z;
  printf("Enter 3 numbers");
  scanf("%d %d %d", &x, &y, &z);
  
  printf("The biggest number is: ");
  
  largest(x, y, z);
  return 0;
}

void largest(int m, int n, int o)
{
   if (m > n && m > o)
    printf("%d", m);
  if (n > m && n > o)
    printf("%d", y);
  if (o > m && o > m)
    printf("%d", o);
}