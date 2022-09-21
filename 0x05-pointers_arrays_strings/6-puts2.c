#include "main.h"
/**
 * puts2 - prints every other letter
 *
 * @str: pointer
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	while (*(str + i + 1) != '\0')
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
