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
	int i = 0;
	int n = 0;

	while (haystack[i])
	{
		while (needle[n])
		{
			if (haystack[i + n] != needle[n])
			{
				break;
			}
			n++;
		}
		if (needle[n] == '\0')
		{
			return (haystack + n);
		}
		i++;
	}

	return ('\0');
}

