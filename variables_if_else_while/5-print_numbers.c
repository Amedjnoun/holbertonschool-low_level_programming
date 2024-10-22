#include <stdio.h>

/**
 * main - Entry point
 * prints all single digit numbers of base 10 starting from 0
 * Return: 0.
 */

int main(void)
{
	char number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');

	putchar('\n');

	return (0);
}
