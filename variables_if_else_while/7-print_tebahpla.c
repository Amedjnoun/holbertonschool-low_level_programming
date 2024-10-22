#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in reverse
 * Return: 0.
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
