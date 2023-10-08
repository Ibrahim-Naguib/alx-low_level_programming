#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the previously allocated memory block.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: On success, returns a pointer to the newly allocated memory block.
 * On failure, returns NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}
	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);

		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)newptr + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (newptr);
}
