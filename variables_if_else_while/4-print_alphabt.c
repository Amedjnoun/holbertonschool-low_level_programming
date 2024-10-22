#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase
 * except for q and e
 * Return: 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
