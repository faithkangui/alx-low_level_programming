#include "main.h"
/**
 * times_table - prints the 9 time table
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(a * b);
		}
		_putchar(',');
		_putchar(' ');
	}
}
