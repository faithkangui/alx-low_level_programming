#include "main.h"
/**
 * int _isalpha - checks for alphabets lowercase or uppercase
 *
 *@c: checks variables
 *
 * Return: int
 */
int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		return (1);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		return (1);
	}
	return (0);
}
