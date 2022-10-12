#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars, initialized with specific char
 * @size: unsigned int
 * @c: char
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	n = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		n[i] = c;
	}
	return (n);
}
