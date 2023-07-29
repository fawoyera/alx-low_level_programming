#include "main.h"
/**
 * main - copy the content of a file to another file
 * @ac: argument count
 * @av: array of arguments pointers
 *
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	int fd_r, fd_w, fd_c;
	ssize_t byte_read, byte_written;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_r = open(av[1], O_RDONLY);
	if (fd_r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_w = open(av[2], O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_w == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	fchmod(fd_w, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	while (1)
	{
		byte_read = read(fd_r, buf, 1024);
		if (byte_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (byte_read == 0)
			break;

		byte_written = write(fd_w, buf, (size_t)byte_read);
		if (byte_written == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	fd_c = close(fd_r);
	if (fd_c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_r), exit(100);
	fd_c = close(fd_w);
	if (fd_c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_w), exit(100);

	return (0);
}
