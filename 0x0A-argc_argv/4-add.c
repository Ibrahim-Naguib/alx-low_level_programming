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
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char c = *argv[i];

		if (c < '0' ||c > '9')
		{
			printf("Error\n");
			return (1);
		}


		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}