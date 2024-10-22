#include <stdio.h>

/**
 * main - Entry point
 * prints all single digit numbers of base 16 starting from 0
 * Return: 0.
 */

int main(void)
{
	char number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');

	for (number = 'a'; number <= 'f'; number++)
		putchar(number);

	putchar('\n');

	return (0);
}
