#include <stdio.h>
#include "main.h"
/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
char alphabets[26] = "abcdefghijlomnopqrstuvwxyz";
int a = 0;
int i;
 while (a < 10)
  {
    for (i = 0; i < 26; i++)
      {
	putchar (alphabets[i]);
      }
    putchar('\n');
    a++;
  }
}
