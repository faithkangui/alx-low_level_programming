#include "main.h"

/**
 * leet - prints leet
 *
 * @s:  pointer
 *
 * Return: char pointer
 */
char *leet(char *s)
{
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";
	char *lptr = letters;
	char *nptr = numbers;
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		while (*(lptr + j) != '\0')
		{
			if (*(lptr + j) == *(s + i))
			{
				*(s + i) = *(nptr + j);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
