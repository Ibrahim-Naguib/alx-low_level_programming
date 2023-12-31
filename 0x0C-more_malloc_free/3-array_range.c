#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		ptr[i] = min + i;
	return (ptr);
}
