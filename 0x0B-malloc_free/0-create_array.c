#include "main.h"
/**
 *create_array -  function to return arrays of char
 *@size: size of array
 *@c: char to be worked on
 *
 *Return: char c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
