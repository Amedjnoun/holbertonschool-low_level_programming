#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * error_exit - prints an error message and exits with a status code
 * @message: the error message to print
 * @code: the status code to exit with
 * @filename: the name of the file related to the error
 */
void error_exit(char *message, int code, char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
 * open_file - opens a file and handles errors
 * @filename: the name of the file to open
 * @flags: the flags to open the file with
 * @mode: the mode to open the file with
 *
 * Return: the file descriptor of the opened file
 */
int open_file(char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
		error_exit("Error: Can't open file %s\n", 98, filename);
	return (fd);
}

/**
 * close_file - closes a file and handles errors
 * @fd: the file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: the number of arguments
 * @av: the arguments
 *
 * Return: 0 on success, 97 if incorrect number of arguments, 98 if read error,
 * 99 if write error, 100 if close error
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, rd, wr;
	char buffer[1024];

	if (ac != 3)
		error_exit("Usage: cp file_from file_to\n", 97, NULL);

	fd_from = open_file(av[1], O_RDONLY, 0);
	fd_to = open_file(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((rd = read(fd_from, buffer, 1024)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
			error_exit("Error: Can't write to %s\n", 99, av[2]);
	}

	if (rd == -1)
		error_exit("Error: Can't read from file %s\n", 98, av[1]);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
