/* Name: ch10_07.c
 * Purpose: Seven-Segment Display
 * Date: 03/05/2015
 * Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <stdlib.h>

#define	MAX_DIGITS 10

const int segments [10] [7] = {
	1, 1, 1, 1, 1, 1, 0,	// 0													 
	0, 1, 1, 0, 0, 0, 0,	// 1
	1, 1, 0, 1, 1, 0, 1,	// 2
	1, 1, 1, 1, 0, 0, 1,	// 3
	0, 1, 1, 0, 0, 1, 1,	// 4
	1, 0, 1, 1, 0, 1, 1,	// 5
	1, 0, 1, 1, 1, 1, 1,	// 6
	1, 1, 1, 0, 0, 0, 0,  // 7
	1, 1, 1, 1, 1, 1, 1,  // 8
	1, 1, 1, 1, 0, 1, 1 	// 9
};

char digits [4] [MAX_DIGITS * 4];
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
	char digit;
	int position;

	clear_digits_array();

	printf("Enter a number: ");					 
	for (position = 0; position < MAX_DIGITS; position++) {
		scanf("%c", &digit);
		if ((digit - '0') >= 0 && (digit - '0') <= 9) {
			process_digit((int)digit - '0', position);
		}
		else if (digit == '\n')
			break;
	}
	print_digits_array();
	return 0;
}

void clear_digits_array(void)
{
	int row, col;
	for (row = 0; row < 4; row++) 
		for (col = 0; col < MAX_DIGITS * 4; col++)
			digits [row] [col] = ' ';
}

void process_digit(int digit, int position)
{
	int row, col, pos;
	for (col = 0; col < 7; col++) {
		if (segments [digit] [col] == 1) {
			switch (col) {
				case 0:
					digits [0] [position * 4 + 1] = '_'; 
					break;
				case 1:
					digits [1] [position * 4 + 2] = '|'; 
					break;
				case 2:
					digits [2] [position * 4 + 2] = '|'; 
					break;
				case 3:
					digits [2] [position * 4 + 1] = '_'; 
					break;
				case 4:
					digits [2] [position * 4 + 0] = '|'; 
					break;
				case 5:
					digits [1] [position * 4 + 0] = '|';
					break;
				case 6:
					digits [1] [position * 4 + 1] = '_';
					break;
			}
		}
	}
}

void print_digits_array(void)
{
	int row, col; 
	for (row = 0; row < 4; row++) { 
		for (col = 0; col < MAX_DIGITS * 4; col++) {
			printf("%c", digits [row] [col]);
		}
		printf("\n");
	}
}
