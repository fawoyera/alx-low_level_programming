#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: pointer to file name
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		byte_written = write(fd, text_content, strlen(text_content));
		if (byte_written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
