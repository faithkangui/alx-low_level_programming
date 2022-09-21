#include "main.h"

/**
 * _strncat - concatinates strings
 *
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp;

	temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	return (temp);
}
