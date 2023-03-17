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
	int l = 0;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	return (p);
}
