/*Name: ch06_11.c
 *Purpose: Approximates e
 *Date: 02/05/2015
 *Author: Yevgeniy Shevekhman
 */

#include<stdio.h>

int main(void)
{
	int n, i;
	float e = 1.0f, F = 1.0f;
	
	printf("n = ");
	scanf("%d", &n);
	
	for ( i = 1 ; i <= n ;  i++){
    F = (F/i);
    e += F ;
    }	
		
	printf("e is approximately %f\n", e);
	return 0;
}