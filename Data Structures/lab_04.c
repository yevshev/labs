/* Yevgeniy Shevekhman
 * Lab Assignment 04
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
  struct node *left;
  int data;
  struct node *right;
}; 
struct node *root = NULL;
struct node *new = NULL;
struct node *p, *q;

void build(void);
void search(struct node *tree);
void traverse(struct node *tree);
void delete(void);
void search_for(struct node *tree, int n);
void delete_node(struct node *tree);
int smallest(struct node *tree);
int largest(struct node *tree);

int main(void) {
  int sel;
	
	printf("Binary Search Tree - Inorder Traversal");

	for (;;) {
		printf("\n");
		printf("(0) Exit\n");
		printf("(1) Insert\n");
		printf("(2) Delete\n");
		printf("Enter selection: \n");
		scanf("%d", &sel);

		if (sel == 0)
			exit(0);

		else if (sel == 1) {
			build();
			traverse(root);
		}
		else if (sel == 2) {
			delete();
			traverse(root);
		}	
	}
	return 0;
}

void build(void)
{
	int n;

	printf("Enter data value to insert into BST: ");
	scanf("%d", &n);

	new = malloc(sizeof(struct node));
	new->data = n;
	new->left = NULL;
	new->right = NULL;
	if (root == NULL)
		root = new;
	else
		search(root);
}

void search(struct node *tree)
{
	if (new->data > tree->data && tree->right == NULL)
		tree->right = new;
	else if (new->data > tree->data && tree->right != NULL)
		search(tree->right);
	else if (new->data < tree->data && tree->left == NULL)
		tree->left = new;
	else if (new->data < tree->data && tree->left != NULL)
		search(tree->left);
}

void traverse(struct node *tree)
{
	if (root == NULL) {
		printf("Empty tree");
		return;
	}
	if (tree->left != NULL)
		traverse(tree->left);

	printf("%d -> ", tree->data);

	if (tree->right != NULL)
		 traverse(tree->right);
}

void delete(void)
{
	int n;

	if (root == NULL) {
		printf("Empty tree");
		return;
	}
	printf("Enter node to delete: ");
	scanf("%d", &n);
	p = root;
	q = root;
	search_for(root, n);
}

void search_for(struct node *tree, int n)
{
	if (n > tree->data) {
		p = tree;
		search_for(tree->right, n);
	}
	else if (n < tree->data) {
		p = tree;
		search_for(tree->left, n);
	}
	else if (n == tree->data) 
		delete_node(tree);
}

void delete_node(struct node *tree)
{
	int n;
	
	if (tree->left == NULL && tree->right == NULL) {
		if (p->left == tree)
			p->left = NULL;
		else
			p->right = NULL;
		tree = NULL;
		free(tree);
		return;
	}
	else if (tree->right == NULL) {
		if (p == tree) {
			root = tree->left;
			p = root;
		}
		else if (p->left == tree)
			p->left = tree->left;
		else
			p->right = tree->right;
		tree = NULL;
		free(tree);
		return;
	}
	else if (tree->left == NULL) {
		if (p == tree) {
			root = tree->right;
			p = root;
		}
		else if (p->right == tree)
			p->right = tree->right;
		else
			p->left = tree->right;
		tree = NULL;
		free(tree);
		return;
	}
	else if (tree->left != NULL && tree->right != NULL) {
		q = root;
		if (tree->right != NULL) {
			n = smallest(tree->right);
			//flag = 1;
		}
		else {
			n = largest(tree->left);
			//flag = 2;
		}
		search_for(root, n);
		tree->data = n;
	}
}

int smallest(struct node *tree) {
	q = tree;
	if (tree->left != NULL) {
		q = tree;
		return (smallest(tree->left));
	}
	else
		return (tree->data);
}

int largest(struct node *tree) {
	if (tree->right != NULL) {
		q = tree;
		return (largest(tree->right));
	}
	else
		return (tree->data);
}

