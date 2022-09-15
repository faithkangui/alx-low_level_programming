#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: int to print
 *
 * Return: int
 */
int _isupper(int c)
{
	int n;

	for (n = 'A'; n <= 'Z'; n++)
	{
		if (n == c)
		return (1);
	}
	return (0);
}
