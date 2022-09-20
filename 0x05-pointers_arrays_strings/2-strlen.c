#include "main.h"
/**
 * str_len - return length
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
