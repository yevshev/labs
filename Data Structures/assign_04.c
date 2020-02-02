/* Yevgeniy Shevekhman
 * Assignment 04
 */

#include <stdio.h>
#include <stdlib.h>

#define PARENT(i) (i - 1) / 2
#define LCHILD(i) 2 * i + 1
#define RCHILD(i) 2 * i + 2

#define MAX 80

int heap[MAX] = {0};
void build(void);
void insert(int n);
void print(void);
void delete(void);

int i;

int main(void)
{
  int sel;

  for (;;) {
    printf("\n(1) Insert\n(2) Delete\n(3) Exit\n");
    printf("Enter selection: ");

    scanf("%d", &sel);
    if (sel == 1)
      build();
    else if (sel == 2)
      delete();
    else if (sel == 3)
      exit(0);
  }
  return 0;
}

void build(void) 
{
  int n;

  printf("Enter a data value: ");  
	scanf("%d", &n);
  insert(n);
  print();
}

void insert(int n)
{
  int j, tmp;

	for (i = 0; i < MAX; i++) {
    if (heap[i] == 0) {
      heap[i] = n;
      break;
    }
  }
  for (j = i; j >= 0; j--) { 
    if (heap[j] > heap[PARENT(j)]) {
      tmp = heap[j];
      heap[j] = heap[PARENT(j)];
      heap[PARENT(j)] = tmp;
    }
  }
}

void delete(void)
{
  int j, tmp;

  heap[0] = heap[i];
  heap[i] = 0;;
  i--;
  j = 0;

  while (heap[LCHILD(j)] != 0 && heap[RCHILD(j)] != 0) {
    if (heap[LCHILD(j)] > heap[RCHILD(j)]) {
      tmp = heap[LCHILD(j)];
      heap[LCHILD(j)] = heap[j];
      heap[j] = tmp;
      j = j + 1;
    }
    else if (heap[RCHILD(j)] > heap[LCHILD(j)]) {
      tmp = heap[RCHILD(j)];
      heap[RCHILD(j)] = heap[j];
      heap[j] = tmp;
      j = j + 2;
    }
  }
  print();    
}

void print(void)
{
  int i;

  for (i = 0; heap[i] != 0; i++)
    printf("%d -> ", heap[i]);
}
      

      















