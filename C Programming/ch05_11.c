/*Name: ch05_11.c
 *Purpose: prints english word for a number
 *Date: 02/05/15
 *Author: Yevgeniy Shevekhman
 */

#include<stdio.h>

int main(void)
{
  int TENS, ONES;

  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &TENS, &ONES);

  if (TENS == 1) {
    if (ONES == 0) 
      printf("Ten\n");
    else if (ONES == 1)
      printf("Eleven\n");
    else if (ONES == 2)
      printf("Twelve\n");
    else if (ONES == 3)
      printf("Thirteen\n");
    else if (ONES == 4)
      printf("Fourteen\n");
    else if (ONES == 5)
      printf("Fifteen\n");
    else if (ONES == 6)
      printf("Sixteen\n");
    else if (ONES == 7)
      printf("Seventeen\n");
    else if (ONES == 8)
      printf("Eighteen\n");
    else if (ONES == 9)
      printf("Nineteen\n");
  } 
  else {

  switch (TENS) {
    case 2:  printf("Twenty");
	     break;
    case 3:  printf("Thirty");
	     break;
    case 4:  printf("Forty");
	     break;
    case 5:  printf("Fifty");
	     break;
    case 6:  printf("Sixty");
             break;
    case 7:  printf("Seventy");
             break;
    case 8:  printf("Eighty"); 
	     break;
    case 9:  printf("Ninety");
             break;	
  }
  switch (ONES) {
    case 1:  printf("-One\n");
	     break;
    case 2:  printf("-Two\n");
	     break;
    case 3:  printf("-Three\n");
	     break;
    case 4:  printf("-Four\n");
	     break;
    case 5:  printf("-Five\n");
	     break;
    case 6:  printf("-Six\n");
             break;
    case 7:  printf("-Seven\n");
             break;
    case 8:  printf("-Eight\n"); 
	     break;
    case 9:  printf("-Nine\n");
             break;	
  }
     }
  return 0; 
} 

