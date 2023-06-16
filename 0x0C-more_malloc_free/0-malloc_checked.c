#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: the sixe to be allocated
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *c;
	
	c = malloc(b);
	
	if (c == NULL)
		exit(98);

	return (c);
}
