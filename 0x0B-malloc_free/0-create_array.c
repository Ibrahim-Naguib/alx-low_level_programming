#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *create_array(unsigned int size, char c)
	{
		unsigned int i;

		if (size == 0)
			return (NULL);
		char *arr = malloc(size);

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
