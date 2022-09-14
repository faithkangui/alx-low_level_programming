#include "main.h"
/**
 * print_last_digit - prints the last digit
 *
 * @i:integer
 *
 *Return: int
 */
int print_last_digit(int i)
{
	int n = i % 10;

	return (_putchar(n));
}
