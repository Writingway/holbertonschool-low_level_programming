#include "main.h"
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print_error - prints an error message to stderr
 * @code: exit code
 * @msg: error message
 * @file: file name
 */
void print_error(int code, const char *msg, const char *file)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}

/**
 * close_fd_check - close a file descriptor and exit with code 100 on failure
 * @fd: file descriptor to close
 */
void close_fd_check(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - copy contents from fd_from to fd_to
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @from_name: source filename (for error messages)
 * @to_name: destination filename (for error messages)
 */
void copy_file(int fd_from, int fd_to, char *from_name, char *to_name)
{
	int rd, wr;
	char buffer[1024];

	while ((rd = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to %s\n", to_name);
		}
	}

	if (rd == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file %s\n", from_name);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success, or exit with the appropriate code on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
		print_error(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to %s\n", av[2]);
	}

	copy_file(fd_from, fd_to, av[1], av[2]);

	close_fd_check(fd_from);
	close_fd_check(fd_to);

	return (0);
}
