#include "main.h"
/**
 *print_sign - prints signs of a number.
 *
 * @n: checks variables.
 *
 * Return: int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		_putchar('-');
		return (-1);
}
