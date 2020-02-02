 /*Name: project2.c
 *Purpose: priority queues
 *Date: 4/21/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	int priority;
	char data[80];
	struct node *next;
};

struct node *first = NULL;
struct node *new_node;
struct node *cur, *prev;

const char *term = "NONE";

void sort_jobs(void);

int main(void)
{
	struct node *q;

	printf("Enter individual printing jobs (NONE to terminate):\n");

	sort_jobs();

	for (q = first; q != NULL; q = q->next) {
		printf("\n%s %d", q->data, q->priority);
	}
	printf("\n");
	return 0;
}

void sort_jobs(void)
{
	for (;;) {
		new_node = malloc(sizeof(struct node));

		scanf("%s", new_node->data);

		if (strcmp(new_node->data, term) == 0)
			break;

		scanf("%d", &new_node->priority);

		new_node->next = NULL;
		
		if (first == NULL)
			first = new_node;

		else {
			for (cur = first, prev = NULL;
					 cur != NULL;
					 prev = cur, cur = cur->next) {

				if (cur->priority <= new_node->priority) {
					new_node->next = cur;
					if (first != cur)
						prev->next = new_node;
					else
						first = new_node;
					break;
				}
				else if (cur->next == NULL) {
					cur->next = new_node;
					break;
				}
			}
		}
	}
}
