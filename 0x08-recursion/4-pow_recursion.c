#include "main.h"

/**
 *  _pow_recursion - calculates the power of x by y
 *  @x: --
 *  @y: -
 *
 *  Return: the power of x by y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	y--;

	return (_pow_recursion(x, y) * x);
}
