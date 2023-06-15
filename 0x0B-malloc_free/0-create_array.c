#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific cha
 * @size - size of memory to be allocated
 * @c - the char 
 *
 * Return - Returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int e;
	char *d;

	if (size == 0)
		return (NULL);

	d =m malloc(size * sizeof(char));
	if (d == 0)
		return (NULL);

	for (e = 0; e < size; e++)
	{
		d[e] = c;
	}

	return (d);
}


