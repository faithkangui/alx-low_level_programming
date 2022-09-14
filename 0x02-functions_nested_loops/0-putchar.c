#include "main.h"
/**
 *main - prints _putchar
 *
 * Return: Always 0
 */
int  main(void)
{
	int ch;

	char str[] = "_putchar";

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
