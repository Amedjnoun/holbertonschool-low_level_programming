#include <stdio.h>

/**
 * main - Entry point
 * prints all possible combinations of single-digit numbers
 * followed by a comma and a space
 * except for 9
 * Return: 0.
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
