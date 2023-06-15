#include "main.h"

/**
 * _strdup - duplicates a string
 *@str: string to be duplicated
 *
 * Return: returns pointer to str
 */

char *_strdup(char *str)
{
	int a = 1, b;
	char *c;

	if (str == NULL)
		return (NULL);

	while (str[a])
	{
		a++;
	}

	c = malloc((sizeof(char) * a) + 1);

	if (c == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
	{
		str[a] = c[b];
	}

	c[b] = '\0';
	return (c);
}
