#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size to be allocated
 *
 * Return - a void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit (98);

	return (c);
}
