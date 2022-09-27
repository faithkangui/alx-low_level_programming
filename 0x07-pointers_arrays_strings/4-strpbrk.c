#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string forany set of bytes
 * @s: pointer to return
 * @accept: pointer
 *
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{

		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
