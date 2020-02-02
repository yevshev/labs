/* Name: LabTest1.c
 * Pupose: checks for repeated digits
 * Date: 02/26/2015
 * Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <ctype.h>

char a[10];
int i;
int digit;
long number;

void check_digits(void) {
	printf("Enter a number: ");
	scanf("%ld", &number);
	
	while (number > 0) {
		digit = number % 10;
		a[digit]++;
		number = number / 10;
	}
  printf("Repeated digits: ");

	for (i = 0; i < 10; i++) {
		if (a[i] > 1)
			printf("%d ", i);
	}
}

int main(void) {
	check_digits();
	printf("\n");
	return 0;
}
	
