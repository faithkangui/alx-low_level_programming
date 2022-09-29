#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: integer
 * @y: integer
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
