#include <stdio.h>

/**
 * main - Entry point
 * Prints the first 50 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int n = 50;
	unsigned int F1 = 1, F2 = 2, Fn;
	int i = 1;
	printf("%u, %u", F1, F2);
	for (i = 3 ; i <= n; i++)
	{
		Fn = F1 + F2;
		printf(", %u", Fn);

		F1 = F2;
		F2 = Fn;
	}

	printf("\n");
	return (0);
}
