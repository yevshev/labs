/*Name: ch12_02a.c
 *Purpose: checks for palindrome
 *Date: 03/26/15
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str[80];
char new[80];
int i, j = 0;
int len;

int main(void)
{
	printf("Enter a message: ");
	fgets(str, sizeof(str), stdin);
	
	for (i = 0; i <= strlen(str); i++) {
		if (isspace(str[i]) || ispunct(str[i])) 
			continue;
		else
			new[j++] = tolower(str[i]);
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
		

