/*Name: ch08_09.c
 *Purpose: generates "random walk"
 *Date: 02/19/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char board[10][10];
	int i, j;
	char k;
	time_t t;
	srand((unsigned) time(&t));

	for (i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			board[i][j] = '.';
		}
	}
	i = 0;
	j = 0;

	for (k = 'A'; k <= 'Z';) {
		if (board[i][j] == '.')
			board[i][j] = k++;
		switch (rand() % 4) {
			case 0:
				if (i > 0 && board[i - 1][j] == '.') {
					i--;
				}
				break;
			case 1:
				if (i < 9 && board[i + 1][j] == '.') {
					i++;
				}
				break;
			case 2:
				if (j > 0 && board[i][j - 1] == '.') {
					j--;
				}
				break;
			case 3:
				if (i < 9 && board[i][j + 1] == '.') {
					j++;
				}
				break;		
			}
			if (board[i - 1][j] != '.' &&
					board[i + 1][j] != '.' && board[i][j - 1] != '.' && 
					board[i][j + 1] != '.')
				break;
	  }
	for (i = 0; i < 10; i++) {
		for(j = 0; j < 10; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
 	return 0;
}
