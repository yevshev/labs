/* Name: ch11_03.c
 * Purpose: add functions to ch06_03
 * Date: 03/12/2015
 * Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denominator,
						int *reduced_numerator, int *reduced_denominator);

int main(void)
{
	int numerator, denominator;
	int reduced_numerator, reduced_denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);
					
	reduce(numerator, denominator, &reduced_numerator, 
				&reduced_denominator);

	printf("In lowest terms: %d/%d\n", reduced_numerator, 
					reduced_denominator);
	
	return 0;	
}

void reduce(int numerator, int denominator,
						int *reduced_numerator, int *reduced_denominator)
{
	int gcd;
	gcd = numerator > denominator && numerator != denominator ? 
				numerator : denominator;
								
	while (gcd > 1) {
		if (numerator % gcd == 0 && denominator % gcd == 0)
			break;
		gcd--;
	}
	*reduced_numerator = numerator / gcd;
	*reduced_denominator = denominator / gcd;
}

