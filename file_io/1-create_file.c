#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: the NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[write_count])
			write_count++;
		write_count = write(fd, text_content, write_count);
		if (write_count == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
