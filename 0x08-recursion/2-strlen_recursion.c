#include "main.h"

/**
 * _strlen_recursion - counts the length of a string
 * @s: the string to be counted
 *
 * Return: th length of a string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s);
	i++;
	s++;
	return (i + 1);
}
