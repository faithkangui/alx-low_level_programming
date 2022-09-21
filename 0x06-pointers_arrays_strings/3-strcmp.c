#include "main.h"

/**
 * _strcmp - compare two string
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int a = *s1;
	int b = *s2;
	int result = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (result);
	}
	else if (*s1 == '\0')
	{
		result = a - b;
		if (result > 0)
			return (result * -1);
		return (result);
	}
	else
	{
		result = b - a;
		if (result < 0)
			return (result * -1);
		return (result);
	}
}
