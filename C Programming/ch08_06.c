/*Name: ch08_06.c
 *Purpose: B1FF Filter
 *Date: 02/13/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{	
char ch;
char a[80];
int i = 0, j;
	
  printf("Enter message: ");
	
  while ((ch = getchar()) != '\n') { 
    a[i++] = ch;
  }
  printf("In B!FF-speak: ");
  
  for (j = 0; j < i; j++)
    switch (a[j] = toupper(a[j])) {
      case 'A': 
	a[j] = '4';
	break;
      case 'B':
	a[j] = '8';
	break;
      case 'E': 
        a[j] = '3';
	break;
      case 'I': 
	a[j] = '1';
	break;
      case 'O': 
	a[j] = '0';
	break;
      case 'S': 
	a[j] = '5';
        break;
    } 
  for (j = 0; j < i; j++)
    putchar(a[j]);

  printf("!!!!!!!!!!\n");
	  
  return 0;
}
