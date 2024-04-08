#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of
 *					integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle, i;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	while (left <= right)
	{
		middle = (left + right) / 2;

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);

		if (left <= right)
		{
			printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				printf("%d", array[i]);
				if (i < right)
					printf(", ");
			}
			printf("\n");
		}
	}
	return (-1);
}
