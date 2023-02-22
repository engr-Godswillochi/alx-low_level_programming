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

/* print_alphabet- to print alphabets*/

void print_alphabet(void)
{
char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alphabets[26]);
}

putchar('\n');

}
