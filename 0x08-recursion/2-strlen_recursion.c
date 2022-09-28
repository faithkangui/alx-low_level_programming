#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: pointer
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	char *i = s;

	if (*i != '\0')
	{
		i++;
	}
	return (i - s);
}
