#include "main.h"
/**
 * _islower -checks for lowercase character.
 *
 * Return: int
 */
int _islower(int c)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == c)
		return (1);
	}
	return (0);
}
