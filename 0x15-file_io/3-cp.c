#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS 0664

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: The exit status of the program.
 */

int main(int argc, char **argv)
{
	int from_fd = 0, to_fd = 0;
	ssize_t bytes;
	char buff[BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

	while ((bytes = read(from_fd, buff, BUFF_SIZE)) > 0)
	{
		if (write(to_fd, buff, bytes) != bytes)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	}
	if (bytes == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	from_fd = close(from_fd);
	to_fd = close(to_fd);

	if (from_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);

	if (to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, to_fd), exit(100);

	return (EXIT_SUCCESS);
}
