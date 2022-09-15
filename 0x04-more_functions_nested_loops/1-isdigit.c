#include "main.h"
/**
 * _isdigit - checks for a digit
 *
 *@c: integer
 *
 * Return: int
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		return (1);
	}
	return (0);
}
