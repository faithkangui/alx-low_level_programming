#include "main.h"

/**
 * reverse_array - reverses array
 *
 * @a: pointer
 * @n: integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int *end;

	end = a + (n - 1);
	while (a < end)
	{
		temp = *a;
		*a = *end;
		*end = temp;
		a++;
		end--;
	}
}
