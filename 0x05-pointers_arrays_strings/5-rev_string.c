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
 * rev_string - reverses a string
 *
 * @s: pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length;
	int c;
	char *begin;
	char *end;
	char temp;

	length = _strlen(s);
	begin = s;
	end = s;

	for (c = 0; c < length - 1; c++)
	end++;
	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}

