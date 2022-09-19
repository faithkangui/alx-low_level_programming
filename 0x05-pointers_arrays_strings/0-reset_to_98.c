#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int parameter and updates the value it ponts to
 * @*n - int
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int n = 98;
	int *n = &n;
	_putchar(*n);
}
