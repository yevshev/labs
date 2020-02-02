/* Yevgeniy Shevekhman
 * Lab Assignment 05
 */

#include <stdio.h>
#define ROW 7
#define COL 7

int graph[ROW][COL] = {{0,1,2,3,4,5,6},
											 {1,1,1,1,0,0,0},
											 {2,0,1,0,1,1,0},
											 {3,1,0,1,0,0,1},
											 {4,0,0,1,1,0,1},
											 {5,0,0,0,0,1,0},
											 {6,0,0,0,0,1,1}};

void trans(void);
void print(int a[ROW][COL]);
int main(void)
{
	printf("Graph:\n");
	print(graph);

	printf("Transitive Closure:\n");
	trans();
	print(graph);
	return 0;
}

void trans(void)
{
	int i, j, k, n = 7;

	for (k = 1; k < n; k++) {
		for (i = 1; i < ROW; i++) {
			for (j = 1; j < COL; j++) {
				graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);	
			}
		}
	}
}
void print(int a[ROW][COL])
{	
	int i, j;

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
