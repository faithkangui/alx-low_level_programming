#include "main.h"
/**
 * more_numbers - prints number 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
			_putchar(i + '0');
			else
			{
				int numbers[2] = {(i / 10), (i % 10)};

				for (int x = 0; x < 2; x++)
				{
					_putchar(numbers[x] + '0');
				}
			}
		}
		_putchar('\n');
	}
}
