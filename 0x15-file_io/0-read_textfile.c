#include "main.h"

/**
 * read_textfile - read a text file and print it to POSIX standard output
 * @filename: pointer to the file path name
 * @letters: the number of letters to read and print
 *
 * Return: number of letters read and printed if success or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t byte_read, byte_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	byte_read = read(fd, buf, letters);
	if (byte_read == -1)
		return (0);

	byte_written = write(STDOUT_FILENO, buf, (size_t)byte_read);
	if (byte_written == -1 || byte_written != byte_read)
		return (0);

	return (byte_written);

	close(fd);
}
