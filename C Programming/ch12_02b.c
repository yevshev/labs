/*Name: ch12_02b.c
 *Purpose: Use pointers
 *Date: 03/26/15
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str[80];
char new[80];
int len, i, j = 0;
char *s;

int main(void)
{
	printf("Enter a message: ");
	fgets(str, sizeof(str), stdin);
	
	s = str;
	for (; *s != '\0'; s++) {
		if (isspace(*s) || ispunct(*s)) 
			continue;
		else
			new[j++] = tolower(*s);
	}
	
	len = strlen(new);
	i = 0;
	while (i <= len) {
		if (new[i++] == new[--len]) 
			continue;
		else {
			printf("Not a Palindrome\n");
			exit(0);
		}
	}

	printf("Palindrome\n");
	return 0;
}
		

