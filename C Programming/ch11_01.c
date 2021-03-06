/* Name: ch11_01.c
 * Purpose: add functions to ch02_07
 * Date: 03/12/2015
 * Author: Yevgeniy Shevekhman
 */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
	int dollars, twenties, tens, fives, ones;

	printf("Enter a Dollar amount: ");
	scanf("%d", &dollars);
	
	pay_amount(dollars, &twenties, &tens, &fives, &ones);

	printf("$20 bills: %d\n$10 bills: %d\n", twenties, tens);
	printf("$ 5 bills: %d\n$ 1 bills: %d\n", fives, ones);
	
	return 0;
}
	
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = (dollars / 20);
	 dollars = (dollars % 20);
	
	*tens = (dollars / 10);
	 dollars = (dollars % 10);
	
	*fives = (dollars / 5);
  
	*ones = (dollars % 5);
}

