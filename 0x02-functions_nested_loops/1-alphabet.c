#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
