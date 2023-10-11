#include "function_pointers.h"

/**
 * print_name - Print a name using a given function.
 *
 * @name: A pointer to a character array (string) representing the name.
 * @f: A function pointer that takes a char* argument.
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
