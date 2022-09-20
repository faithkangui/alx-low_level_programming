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
