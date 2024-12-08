#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include "file_utils.h"

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments passed to the program
 * @argv: The arguments passed to the program
 *
 * Return: 0 on success, 97, 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	check_args(argc);
	file_from = open_file_from(argv[1]);
	file_to = open_file_to(argv[2]);
	copy_content(file_from, file_to);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
