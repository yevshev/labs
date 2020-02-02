/*Yevgeniy Shevekhman
  Assignment 1.2   */
  
#include <stdio.h>

void print_0dds(int m, int n);

int main(void)
{
  int m, n;
  
  printf("Enter two numbers");
  scanf("%d %d", &m, &n);
  
  print_odds(m, n);
  return 0;
}

void print_odds(int m, int n) 
{
  printf("The odd numbers between %d and %d are:", m, n);
  
  for (i = m; m < n; m++) {
    if (i % 2 != 0)
      print("%d ", i)
  }
}