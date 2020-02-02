/*Name: ch13_13.c
 *Purpose: Modify Caesar Cipher
 *Date: 04/09/2015
 *Author: Yevgeniy Shevekhman
 */

#include <stdio.h>
#include <ctype.h>

char a[80];
void encrypt(char *msg, int shift);

int main(void)
{
  char ch, *str;
	int n, i = 0;

  printf("Enter message to be encrypted: ");

  while ((ch = getchar()) != '\n') 
    a[i++] = ch;

	str = a;

  printf("Enter shift amount (1-25): ");
	scanf("%d", &n);

	encrypt(str, n);
  return 0;
}

void encrypt(char *msg, int shift)
{
	int i , j;

  for (msg = &a[0]; *msg != '\0'; msg++) {
    if (*msg == ' ' || *msg == '.' || *msg == ',');
    else if (*msg == toupper(*msg))
      *msg = (((*msg - 'A') + shift) % 26 + 'A');
    else if (*msg == tolower(*msg))
      *msg = (((*msg - 'a') + shift) % 26 + 'a');
  }
  printf("Encrypted message: ");

  for (msg = &a[0]; *msg != '\0'; msg++) 
    putchar(*msg);
  
  printf("\n");
}
