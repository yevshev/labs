/*Name: ch06_03.c
 *Purpose: Reduces fraction
 *Date: 02/05/2015
 *Author: Yevgeniy Shevekhman
 */

#include<stdio.h>

int main(void)
{
	int NUM, DEN, GCD;
	
	printf("Enter a fraction: ");
	scanf("%d/%d", &NUM, &DEN);
	
	GCD = NUM > DEN && NUM != DEN ? NUM : DEN;
			
	while (GCD > 1) {
		if (NUM % GCD == 0 && DEN % GCD == 0)
			break;
			GCD--;
		}
	printf("In lowest terms: %d/%d\n", NUM / GCD, DEN / GCD);
	
	return 0;
}