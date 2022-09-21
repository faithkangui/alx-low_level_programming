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
	int sizeS1 = 0;
	int sizeS2 = 0;

	while (*(s1 + i) != '\0')
	{
		sizeS1++;
		i++;
	}
	i = 0;
	while (*(s2 + i) != '\0')
	{
		sizeS2++;
		i++;
	}

	if (sizeS1 == sizeS2)
		return (0);
	else
		return (*s1 - *s2);
}
