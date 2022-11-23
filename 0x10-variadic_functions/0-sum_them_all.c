#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 *
 * Return: sum parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int j;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(valist, const unsigned int);
	}

	va_end(valist);

	return (sum);
}
