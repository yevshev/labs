/*Name: ch16_06.c
 *Purpose: modify ch05_09
 *Date: 04/16/15
 *Author: Yevgeniy Shevekhman
 */
#include<stdio.h>

struct date {
  int month;
  int day;
  int year;
} d1, d2;

int compare_date(struct date d1, struct date d2);

int main(void)
{
  printf("Enter first date mm/dd/yyyy ");
  scanf("%2d/%2d/%4d", &d1.month, &d1.day, &d1.year);

  printf("Enter second date mm/dd/yyyy ");
  scanf("%2d/%2d/%4d", &d2.month, &d2.day, &d2.year);

  compare_date(d1, d2);
  return 0;
}

int compare_date(struct date d1, struct date d2)
{
  if (d1.year < d2.year)
    printf("%d/%d/%d is earlier than %d/%d/%d\n",
           d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);

  else if (d1.year == d2.year && d1.month < d2.month)
    printf("%d/%d/%d is earlier than %d/%d/%d\n",
           d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);

  else if (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day)
    printf("%d/%d/%d is earlier than %d/%d/%d\n",
           d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);

  else
    printf("%d/%d/%d is earlier than %d/%d/%d\n",
           d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
}
