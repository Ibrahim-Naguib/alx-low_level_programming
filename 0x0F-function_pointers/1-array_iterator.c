#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Apply a function to each element of an integer array.
 *
 * @array: The integer array.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to be applied to each array element.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
	{
		while (array <= last)
			action(*array++);
	}
}
