#include "main.h"

/**
 * str_len - return length
 * @ptr: pointer
 *
 * Return: int
 */
int str_len(char *ptr)
{
	int i = -1;

	while (*(ptr + i) != '\0')
	i++;
	return (i);
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

	len = str_len(s);
	start = s;
	end = s;

	for (i = 0; i < len / 2; i++)
	end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		
		_putchar(*end);

		start++;
		end--;
	}
}
