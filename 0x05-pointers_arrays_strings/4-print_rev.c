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
 * _puts - print a string followed by new line
 * @str: char
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	_putchar(*(str + i));
	_putchar('\n');
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
	char *start;
	char *end;
	char temp;

	len = _strlen(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
	end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}

	_puts(s);
}
