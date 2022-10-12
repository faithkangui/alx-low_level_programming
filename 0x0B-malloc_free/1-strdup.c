#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: char pointer
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *n;
	int str_len = 0;
	int i = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}
	n = malloc((str_len * sizeof(char)) + 1);
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		n[i] = str[i];
	}
	n[i] = '\0';
	return (n);
}
