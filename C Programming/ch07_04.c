/*Name: ch04_07.c
 *Purpose: translates alphabetic phone number into numeric
 *Date: 02/12/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{	
	char n;
	
	printf("Enter phone number: ");
	
	while ((n = getchar()) != '\n') {
	  switch (n) {
		  case 'A': case 'B': case 'C':
			  printf("2");
				break;
		  case 'D': case 'E': case 'F':
			  printf("3");
				break;
		  case 'G': case 'H': case 'I':
			  printf("4");
				break;
			case 'J': case 'K': case 'L':
			  printf("5");
				break;
			case 'M': case 'N': case 'O':
			  printf("6");
				break;
			case 'P': case 'Q': case 'R': case 'S':
			  printf("7");
				break;
			case 'T': case 'U': case 'V':
			  printf("8");
				break;
			case 'W': case 'X': case 'Y': case 'Z':
			  printf("9");
				break;
			default:
				putchar(n);
	  } 
	}
	printf("\n");
		
	return 0;
}
