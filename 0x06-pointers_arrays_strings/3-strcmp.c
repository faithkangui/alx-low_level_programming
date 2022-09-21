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
	int i = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}

	if (*(s1 + i) == '\0')
	{
		return (0 - *(s2 + i));
	}

	return (*(s1 + i) - 0);
}
