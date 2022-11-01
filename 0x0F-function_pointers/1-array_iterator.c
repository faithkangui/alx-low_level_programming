#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as
 *		parameter on each element of an array
 * @array: the array
 * @size: the size of array
 * @action: A pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
