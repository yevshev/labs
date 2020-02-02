/*Name: ch07_13.c
 *Purpose: calculates average word length
 *Date: 02/13/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	float WC = 1, TOTAL = 0;
  
  printf("Enter a sentence: ");
  
	while ((ch = getchar()) != '\n') {
		if (ch == ' ')
			WC++;
		else
		  TOTAL++;
	}
  printf("Average word length: %.1f\n", TOTAL / WC);
	
  return 0;
} 
