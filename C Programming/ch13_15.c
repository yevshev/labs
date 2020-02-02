/* Name: ch13_15.c
 * Purpose: modify  ch10_06.c
 * Date: 04/09/2015
 * Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "readline.h"
#include "readline.c"

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

int evaluate_rpn_expression(const char *expression);

char expr[STACK_SIZE];

int main(void)
{	
	printf("Enter an RPN expression: ");
	read_line(expr, STACK_SIZE); 	
	printf("Value of expression: %d\n", evaluate_rpn_expression(expr));
	
	return 0;
}

int evaluate_rpn_expression(const char *expression)
{
	int x, y, z;
	const char *p;
	p = expr;

		for (; *p != '\0'; p++) {
			if (*p == '+')
				push( pop() + pop() );
			else if (*p == '*')
				push( pop() * pop() );
			else if (*p == '-') {
				x = pop();
				y = pop();
				push(y - x);
			}
			else if (*p == '/') {
				x = pop();
				y = pop();
				push(y / x);
			}
			else if (*p >= '0'&& *p <= '9')
				push(*p - '0');
			else if (*p == '=')  
				z = pop();
		}
	return z;
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
