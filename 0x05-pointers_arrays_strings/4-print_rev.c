#include "main.h"

/**
 * _strlen - return length
 * @s: pointer
 *
 * Return: int
 */
int _strlen(char *s)
{
	char *i = s;

	while (*i != '\0')
	{
		i++;
	}
	return (i - s);
}

/**
 * print_rev - prints a string in reverse
 * @s: char
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
