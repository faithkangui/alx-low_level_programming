#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: char
 * @src: char
 * @n: unsigned int
 *
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
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
