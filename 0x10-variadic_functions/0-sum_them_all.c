#include "variadic_functions.h"

/**
 * sum_them_all -  function that sums all arguments passed to it
 * @n: number of arguments
 *
 * Return: returns nothing
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list c;
	int i = 0, x;
	
	if (n == 0)
		return (0);

	va_start(c, n);
	for (; i < n; i++)
	{
		x = va_arg(c, int);
		total += x;
	}
	va_end(c);

	return (total);
}
