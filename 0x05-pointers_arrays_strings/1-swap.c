#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer int to be swaped
 * @b: integer int to be swaped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
