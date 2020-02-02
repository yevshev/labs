/*Yevgeniy Shevekhman
 * Lab Assignment 06
 */

#include <stdio.h>
int front = -1;
int rear = -1;
int top = -1;
									       /*0 1 2 3 4 5 6 7 8 9*/	
int graph[10][10] = {/*0*/{1,1,0,0,0,1,0,0,0,0},
										 /*1*/{1,1,1,0,1,0,0,0,0,0},
										 /*2*/{0,1,1,0,0,1,0,1,0,0},
										 /*3*/{0,0,0,1,1,0,1,0,0,0},
										 /*4*/{0,1,0,1,1,1,1,0,0,1},
										 /*5*/{1,0,1,0,1,1,0,0,1,0},
										 /*6*/{0,0,0,1,1,0,1,0,1,0},
										 /*7*/{0,0,1,0,0,0,0,1,1,0},
										 /*8*/{0,0,0,0,0,1,1,1,1,1},
										 /*9*/{0,0,0,0,1,0,0,0,1,1}
};

void bfs(int g[10][10], int n);
int queue[10] = {0};
int discovered[10] = {0};
void enqueue(int n);
int dequeue(void);

void dfs(int g[10][10], int n);
int stack[10] = {0};
void push(int n);
int pop(void);

int main(void)
{
	int n, sel;
	printf("Enter node to search: ");
	scanf("%d",&n);
	
	printf("(1) Breadth First Search\n");
	printf("(2) Depth First Search\n");
	printf("Enter Selection: ");
	scanf("%d", &sel);
	
	if (sel == 1) {
		bfs(graph, n);
	}
	else if (sel == 2) {
		dfs(graph, n);
	}
	return 0;
}

void enqueue(int n)
{		
	queue[++rear] = n;
}

int dequeue(void)
{
	int n;
	n = queue[++front];
	return n;
}

void bfs(int g[10][10], int n)
{
	int i, v;

	enqueue(n);
	discovered[n] = 1;
	
	while (front != rear) {
		v = dequeue();
		printf("%d -> ", v);
		for (i = 0; i < 10; i++) {
			if (g[v][i] == 1 && discovered[i] == 0) {
				enqueue(i);
				discovered[i] = 1;
			}
		}
	}
	printf("\n");
}

void dfs(int g[10][10], int n)
{ 
	int v, i;
	
	push(n);
	
	while (top != -1) {
		v = pop();
		if (discovered[v] == 0) {
			printf("%d -> ", v);
			discovered[v] = 1;
			for (i = 0; i < 10; i++) {
				if (g[v][i] == 1)
					push(i);
			}
		}
	}
	printf("\n");
}

void push(int n)
{
	stack[++top] = n;
}

int pop(void)
{
	return stack[top--];
}
