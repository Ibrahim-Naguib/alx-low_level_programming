#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - Check if a string represents a valid number.
 * @str: The input string to check.
 *
 * Return: 1 if str is a valid number, 0 otherwise.
 */

int is_number(char *str)
{
	int i;

	if (str == NULL || str[0] == '\0')
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - Multiply two numbers provided as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 if successful, 1 if an error occurs.
 */

int main(int argc, char *argv[])
{
	unsigned int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%u\n", mul);
	return (0);
}
