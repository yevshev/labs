/* Name: ch15_05.c
 * Purpose: modify 10_06.c into separate files
 * Date: 04/09/2015
 * Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"
#include "stack.c"

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
