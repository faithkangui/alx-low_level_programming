#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
	{
		_putchar(print_alphabet);
	}
	_putchar('\n');
	return (0);
}
