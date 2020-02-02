/*Name: ch09_01.c
 *Purpose: sort array
 *Date: 04/16/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#define N 10

void selection_sort(int a[], int large);

int main(void)
{
	int a[N], i;

	printf("Enter a series of %d integers: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);

	selection_sort(a, N - 1);

	printf("Sorted: ");
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}

void selection_sort(int a[], int large)
{
	int i, tmp; 

	if (large - 1 > 0) {
		for (i = 0; i < large; i++) {
			if (a[i] > a[large]) {
				tmp = a[large];
				a[large] = a[i];
				a[i] = tmp;
			}
		}
		selection_sort(a, large - 1);
	}
}











