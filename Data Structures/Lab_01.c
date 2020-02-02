#include <stdio.h>
#include <stdlib.h>

struct node *build(void);
struct node *search(struct node *list, int n);
struct node *insert(struct node *list, int n);
struct node *Delete(struct node *list, int n);

struct node {	
	int data;
	struct node *next;
};

struct node *new_node;

int main(void)
{
  int val;
  
	build();
	
	printf("Enter a data value to search: ");
	scanf("%d", &val);
	
	insert(search(start, val)), val);
	
	Delete(start, val);
	
  
  
	return 0;
}

struct node *build(void)
{
	int n,
	struct node *start = NULL;

	printf("Enter a list of integers, separated by spaces\n");
	printf("Enter 0 to terminate");

	for (;;) {
		scanf("%d", &n);
		if (n == 0)
			return start;
		start = insert(start, n);
	}
}

struct node *search(struct node *list, int n)
{
	struct node *p;
	

	for (p = list; p != NULL; p = p->next)
		if (p->data == n)
			return p;
	return NULL;
}

struct node *insert(struct node *list, int n)
{
	struct node *new_node;
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
	  printf("Error: No available memory\n");
	  exit(1);
	}
	new_node->next = list->next;
	list->next = new_node;
	  
	return new_node;
}

struct node *Delete(struct node *list, int n)
{
	struct node *cur, *prev;
	for (cur = list, prev = NULL;
		cur != NULL && cur->data != n;
		prev = cur, cur = cur->next);

	if (cur == NULL)
		return list;  
	if (prev == NULL)
		list = list->next;      
	else
		prev->next = cur->next; 
	free(cur);
	return list;
}