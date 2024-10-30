#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * fizz_buzz prints the numbers from 1 to 100, followed by a new line
 * return: 0 success
 */

void fizz_buzz(void);

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line.
 * For multiples of three, prints "Fizz" instead of the number.
 * For multiples of five, prints "Buzz".
 * For numbers which are multiples of both three and five, prints "FizzBuzz".
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
}
