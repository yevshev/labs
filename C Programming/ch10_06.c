/* Name: ch10_06.c
 * Purpose: Reverse Polish Notation
 * Date: 03/05/2015
 * Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents [STACK_SIZE];
int top;
char ch;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
	int x, y, z;

	for (;;) {
		printf("Enter an RPN expression: ");
		for (;;) {
			scanf(" %1c", &ch);
			if (ch == '+')
				push( pop() + pop() );
			else if (ch == '*')
				push( pop() * pop() );
			else if (ch == '-') {
				x = pop();
				y = pop();
				push(y - x);
			}
			else if (ch == '/') {
				x = pop();
				y = pop();
				push(y / x);
			}
			else if (ch >= '0'&& ch <= '9')
				push(ch - '0');
			else
				break;
		}
		if (ch == '=') {
			z = pop();
			if (is_empty())
				printf("Value of expression: %d\n", z);
			else
				make_empty();
		}
		else
			break;
	}	
	return 0;
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		contents [top++] = i;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents [--top];
}

void stack_overflow(void)
{
	printf("Expression is too complex\n");
	exit(0);
}

void stack_underflow(void)
{
	printf("Not enough operands in expression\n");
	exit(0);
}
