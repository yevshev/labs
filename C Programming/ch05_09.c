/*Name: ch05_09.c
 *Purpose: Identitifes earlier date
 *Date: 02/05/15
 *Author: Yevgeniy Shevekhman
 */
#include<stdio.h>

int main(void)
{
  int MONTH_1, DAY_1, YEAR_1;
  int MONTH_2, DAY_2, YEAR_2;

  printf("Enter first date mm/dd/yyyy ");
  scanf("%2d/%2d/%4d", &MONTH_1, &DAY_1, &YEAR_1);

  printf("Enter second date mm/dd/yyyy ");
  scanf("%2d/%2d/%4d", &MONTH_2, &DAY_2, &YEAR_2);

  if (YEAR_1 < YEAR_2)
    printf("%d/%d/%d is earlier than %d/%d/%d\n", MONTH_1, DAY_1, YEAR_1, MONTH_2, DAY_2, YEAR_2);
  else if (YEAR_1 == YEAR_2 && MONTH_1 < MONTH_2)
    printf("%2d/%2d/%4d is earlier than %2d/%2d/%4d\n", MONTH_1, DAY_1, YEAR_1, MONTH_2, DAY_2, YEAR_2);
  else if (YEAR_1 == YEAR_2 && MONTH_1 == MONTH_2 && DAY_1 < DAY_2) 
    printf("%2d/%2d/%4d is earlier than %2d/%2d/%4d\n", MONTH_1, DAY_1, YEAR_1, MONTH_2, DAY_2, YEAR_2);
  else     
    printf("%2d/%2d/%4d is earlier than %2d/%2d/%4d\n", MONTH_2, DAY_2, YEAR_2, MONTH_1, DAY_1, YEAR_1);

  return 0;
}
