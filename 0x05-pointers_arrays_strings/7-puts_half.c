#include "main.h"
/**
 *puts_half - print the last half of a string
 *@str: the string to be worked on
 *
 *return - voifd
 */

void puts_half(char *str)
{
int n;
int j = 0;

while (str[j] != '\0')
{
j++;
}
if (j % 2 == 0)
{
n = j / 2;
}
else
{
n = 1 + (j - 1) / 2;
}
for (;n < j; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
