#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */

void print_alphabet(void)
{
char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alphabets[i]);
}

putchar('\n');

}
