/*Name: Project.c
 *Purpose: Determines day number
 *Date: 02/05/2015
 *Author: Yevgeniy Shevekhman

*Write a program that determines the day number (1 to 366) in a year for a date that is
*provided as input data. As an example, January 1, 1994, is day 1. December 31, 1993, is
*day 365. December 31, 1996, is day 366. Since 1996 is a leap year. A year is a leap year if
*it is divisible by four, except that any year divisible by 100 is a leap year only if it is
*divisible by 400. Your program should accept the month, day and year as integers.
*/

#include<stdio.h>

int main(void)
{
  int M, D, Y; 
  int FEB, TOTAL;
 
  printf("Enter a date mm/dd/yyy: ");
  scanf("%2d/%2d/%4d", &M, &D, &Y);
  
  if (Y % 400 == 0 || Y % 100 != 0 && Y % 4 == 0)
    FEB = 29;
  else
    FEB = 28;

  switch (M) {
    case 1:  TOTAL = D; 
	     break;
    case 2:  TOTAL = D + 31; 
	     break;
    case 3:  TOTAL = D + 31 + FEB; 
	     break;
    case 4:  TOTAL = D + 62 + FEB; 
	     break;
    case 5:  TOTAL = D + 92 + FEB;
	     break;
    case 6:  TOTAL = D + 123 + FEB; 
	     break;
    case 7:  TOTAL = D + 153 + FEB;
             break;
    case 8:  TOTAL = D + 184 + FEB;
             break;
    case 9:  TOTAL = D + 215 + FEB; 
             break;
    case 10:  TOTAL = D + 245 + FEB;
	      break;	   
    case 11:  TOTAL = D + 276 + FEB; 
	      break;
    case 12:  TOTAL =  D + 306 + FEB; 
	      break;
    }
   printf("Day %d\n", TOTAL);

   return 0;
}
