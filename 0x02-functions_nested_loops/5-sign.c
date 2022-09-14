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
	int i;
	
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	if (i ==0)
	{
		_putchar('0');
		return (0);
	}
	if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
}	
