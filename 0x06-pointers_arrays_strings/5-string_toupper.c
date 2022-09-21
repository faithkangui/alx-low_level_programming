#include "main.h"

/**
 * string_toupper - change to uppercase
 *
 * @s: pointer
 *
 * Return: char
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		int letter = *(s + i);
		if (letter >= 'a' && letter <= 'z')
		{
			*(s + i) = *(s + i) - ('a' - 'A');
		}
		i++;
	}

	return s;
}
