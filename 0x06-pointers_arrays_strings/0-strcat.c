#include "main.h"

/**
 * _strcat - concatinate strings
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}

	*temp = '\0';

	return (dest);
}
