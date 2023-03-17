#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: size of datatypr
 *
 * Return: a void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size);
{
	int a = 0, b = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = nmemb * size;
	s = malloc(a);

	if (s == NULL)
		return (NULL);

	while (b < a)
	{
		s[b] = 0;
		b++;
	}
	return (s);
}
