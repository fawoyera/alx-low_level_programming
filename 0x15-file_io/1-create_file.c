#include "main.h"

/**
 * create_file - create a file
 * @filename: pointer to the file name
 * @text_content: string to write to the file
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
