#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array of
 *					integers using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	int start = 0, end = (int)sqrt(size), i = 0, prev = 0;

	if (array == NULL)
		return (-1);

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		start++;
		prev = i;
		i = start * end;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, i);

	for (; prev <= i && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
