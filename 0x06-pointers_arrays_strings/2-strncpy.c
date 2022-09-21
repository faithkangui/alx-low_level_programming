#include "main.h"

/**
 * _strncpy - copy string
 *
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp;

	temp = dest;
	while (n > 0 && *src != '\0' && *dest != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	dest = temp;
	return (dest);
}
