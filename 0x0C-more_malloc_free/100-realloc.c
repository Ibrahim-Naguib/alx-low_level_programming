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
	int i;
	char *newptr;
	char *oldchar; 
    char *newchar;
	int copy_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL && new_size != 0)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
	}       
	oldchar = (char *)ptr;
	newchar = newptr;
	copy_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < copy_size; i++)
		newchar[i] = oldchar[i];
	free(ptr);
	return (newptr);
}
