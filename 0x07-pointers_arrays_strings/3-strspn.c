#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int p;

	int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (p = 0; accept[p] != '\0'; p++)
			{
				if (s[i] == accept[p])
					a++;
			}
		}
		else
			return (a);

	}
	return (a);
}
