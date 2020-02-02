/*Name: ch07_11.c
 *Purpose: displays last name, first initial
 *Date: 02/12/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char FIRST, LAST;
  
  printf("Enter a first and last name: ");
  scanf("%c", &FIRST);
  
  while (getchar() != ' ');
	
  while((LAST = getchar()) != '\n')
	  printf("%c", LAST);
	
  printf(", %c\n", FIRST);
	
  return 0;
} 
