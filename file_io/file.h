#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

void check_args(int argc);
int open_file_from(char *filename);
int open_file_to(char *filename);
void copy_content(int file_from, int file_to);
void close_file(int fd);

/**
 * check_args - Checks if the number of arguments is correct
 * @argc: The number of arguments passed to the program
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}


/**
 * open_file_from - Opens a file to read from
 * @filename: The name of the file to open
 *
 * Return: The file descriptor of the file
 */
int open_file_from(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}
/**
 * open_file_to - Opens a file to write to
 * @filename: The name of the file to open
 *
 * Return: The file descriptor of the file
 */
int open_file_to(char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * copy_content - Copies the content of a file to another file
 * @file_from: The file descriptor of the file to copy from
 * @file_to: The file descriptor of the file to copy to
 */
void copy_content(int file_from, int file_to)
{
	int read_from, wrote_to;
	char buffer[1024];

	while ((read_from = read(file_from, buffer, 1024)) > 0)
	{
		wrote_to = write(file_to, buffer, read_from);
		if (wrote_to != read_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_to);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (read_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", file_from);
		close(file_from);
		close(file_to);
		exit(98);
	}
}

/**
 * close_file - Closes a file descriptor
 * @fd: The file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

#endif /* FILE_H */
