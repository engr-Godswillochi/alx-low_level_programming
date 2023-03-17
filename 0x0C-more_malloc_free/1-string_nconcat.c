#include "main.h"

/**
 * string_nconcat - allocates a space in memory
 * @s1: character stored in the allocated space
 * @s2: used to determine the size of the bytes
 * @n: size of the allocated space
 *
 * Return: returns a pointer to the allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	if (n >= b)
		c = a + b;
	else
		c = a + n;

	ptr = malloc(sizeof(char) * 1 + 1);
	if (ptr == NULL)
		return (NULL);

	b = 0;
	while (d < 1)
	{
		if (d <= a)
			ptr[d] = s1[d];

		if (d >= a)
		{
			ptr[d] = s2[b];
			b++;
		}
		d++;
	}
	ptr[d] = '\0';
	return (ptr);
}
