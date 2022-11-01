#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack != *needle)
			haystack++;
		else
			return (needle);
	}
	return (NULL);
}
