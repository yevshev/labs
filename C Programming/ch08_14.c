/*Name: ch08_14.c
 *Purpose: reverses words in a sentence
 *Date: 02/14/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{	
  char ch, a[80], term_ch;
  int i = 0, j, k;
  
  printf("Enter a sentence: ");
	
  while ((ch = getchar()) != '\n') { 
    if (ch == '.' || ch == '?' || ch == '!')
      term_ch = ch;
    else 
      a[i++] = ch;
  }
  k = i;
	
  printf("Reversal of sentence: ");
	
  for (i; i >= -1; i--) {
    if (i < 0 || a[i] == ' ') {
      for (j = i + 1; j < k; j++) {
        putchar(a[j]);
      }
      if (i >= 0) {
        putchar(a[i]);
        k = i;
      }
    }
  }
  	
  printf("%c\n", term_ch);
	
  return 0;
}
