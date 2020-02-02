/* Name: LabTest_2.c
 * Purpose: counts vowels
 * Date: 02/26/2105
 * Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <ctype.h>

char ch;
int count;

void count_vowels(void) {

	printf("Enter a sentence: ");

	while ((ch = getchar()) != '\n') {
		switch (ch = toupper(ch)) {
			case 'A':
				count++;
				break;
			case 'E':
				count++;
				break;
			case 'I':
				count++;
				break;
			case 'O':
				count++;
				break;
			case 'U':
				count++;
				break;
			default:
				break;
		}
	}
printf("Your sentence contains %d vowels", count);
}

int main(void) {
	count_vowels();	
	printf("\n");
	return 0;
}
