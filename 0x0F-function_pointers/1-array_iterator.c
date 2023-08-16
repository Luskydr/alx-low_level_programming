#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute function on each elements of array
 * @array: the array
 * @size: size of array
 * @action: function to perform on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
