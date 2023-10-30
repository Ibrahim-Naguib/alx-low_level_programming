#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @str: A pointer to the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}

/**
 * append_text_to_file - Appends text content to an existing file.
 * @filename: The name of the file to which the text will be appended.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes = 0, len; 

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	len = _strlen(text_content);
	bytes = write(fd, text_content, len);

	if (bytes == -1)
		return (-1);

	close(fd);

	return (1);
}
