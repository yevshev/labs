/*Name: ch13_18.c
 *Purpose: displays date
 *Date: 04/02/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>

int month, day, year;

char *cal[] = {"January", "February", "March"    ,
							 "April"  , "May"     , "June"     ,
							 "July"   , "August"  , "September",
							 "October", "November", "December"};
int main(void)
{
	printf("Enter a date (mm/dd/yyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	printf("You entered the date %s %d, %d\n", cal[month - 1], day, year);
  return 0;
} 
