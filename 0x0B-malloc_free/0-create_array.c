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
	unsigned int count;

	n = malloc(size * sizeof(char));
	for (count = 0; count < size; count++)
	{
		n[count] = c;
	}
	return (n);
}
