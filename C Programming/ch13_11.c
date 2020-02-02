/*Name: ch13_11.c
 *Purpose: Modify 07_13.c
 *Date: 02/13/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

const char *s;
double compute_average_word_length(const char *sentence);

int main(void)
{
	char a[80], ch;
	int i = 0;
	
	printf("Enter a sentence: ");

	while ((ch = getchar()) != '\n') {
		a[i++] = ch;
	}

	s = a;
	printf("Average word length: %.1f\n", compute_average_word_length(s));

	return 0;
}

double compute_average_word_length(const char *sentence)
{
	int  wc = 1;
	int total = 0;

	for (; *s != '\0'; s++) {
		if (*s == ' ')
			wc++;
		else
		  total++;
	}	
	return (float) total / wc;
} 
