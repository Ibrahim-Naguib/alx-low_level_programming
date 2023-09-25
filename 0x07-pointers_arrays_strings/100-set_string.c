#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: pointer of pointer.
 * @to: value to set.
 *
 * Return: Nothing.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
