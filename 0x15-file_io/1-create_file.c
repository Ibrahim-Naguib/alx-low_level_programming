#include "main.h"

/**
 * create_file - Creates a new file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = strlen(text_content);
	ssize_t bytes = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	bytes = write(fd, text_content, len);

	if (bytes == -1)
		return (-1);

	close(fd);

	return (1);
}
