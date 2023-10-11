#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 *
 * @array: The array of integers to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: The index of the first matching element or -1 if no match is found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}

	}
	return (-1);
}
