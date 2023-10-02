#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mult = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
