/*Name: ch12_05.c
 *Purpose: modify 08_14.c to use pointers
 *Date: 04/02/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{	
  char ch, a[80], term_ch;
  int i = 0, s = 0;
  char *p, *q, *k;
	

  printf("Enter a sentence: ");
	
  while ((ch = getchar()) != '\n') { 
    if (ch == '.' || ch == '?' || ch == '!') {
      term_ch = ch;
			s = 1;
		}
    else  
      a[i++] = ch;
	}
	a[i] = '\0';
	p = &a[i];
		
  
  k = p;
	
  printf("Reversal of sentence: ");
	
  for (p; p >= a-1; p--) {
    if (p < a || *p == ' ') {
      for (q = p + 1; q < k; q++) {
        putchar(*q);
      }
			
      if (p >= a){
				putchar(*p);
        k = p;
      }
    }
  }
	if (s == 1)   	
		printf("%c\n", term_ch);
	
  return 0;
}
