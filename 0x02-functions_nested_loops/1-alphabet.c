#include <stdio.h> 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}

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
