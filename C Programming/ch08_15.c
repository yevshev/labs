/*Name: ch08_15.c
 *Purpose: Caesar Cipher
 *Date: 02/16/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch;
  char a[80];
  int i = 0, j, n;

  // ((ch - 'A') + n) % 26 + 'A'

  printf("Enter message to be encrypted: ");

  while ((ch = getchar()) != '\n') 
    a[i++] = ch;

  printf("Enter shift amount (1-25): ");
  scanf("%d", &n);

  for (j = 0; j < i; j++) {
    if (a[j] == ' ' || a[j] == '.' || a[j] == ',');
    else if (a[j] == toupper(a[j]))
      a[j] = (((a[j] - 'A') + n) % 26 + 'A');
    else if (a[j] == tolower(a[j]))
      a[j] = (((a[j] - 'a') + n) % 26 + 'a');
  }
  printf("Encrypted message: ");

  for (j = 0; j < i; j++) 
    putchar(a[j]);
  
  printf("\n");
  return 0;
}
