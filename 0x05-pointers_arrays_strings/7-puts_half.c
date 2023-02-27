#include "main.h"
/**
 *puts_half - print the last half of a string
 *@str: the string to be worked on
 *
 *return - voifd
 */

void puts_half(char *str)
{
int i, n;
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
for (i = j; i < n; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
