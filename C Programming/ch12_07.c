/*Name: ch12_07.c
 *Purpose: modify max_min function
 *Date: 04/02/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>

#define N 10

int *p;
void max_min(int *p, int *max, int *min);

int main(void)
{
	int b[N], i, big, small; 
	p = b;

	printf("Enter %d numbers: ", N);
	
	while (i < N)
		scanf("%d", &b[i++]);
	
	p = b;
	max_min(p, &big, &small);

	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);

	return 0;
}

void max_min(int *p, int *max, int *min)
{
	*max = *min = *p;
	for (; *p != '\0'; p++) {
		if (*p > *max)
			*max = *p;
		else if (*p < *min)
			*min = *p;
	}
}
