#include <stdio.h>

/**
 * main - Entry point
 * Prints the first 50 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int n = 50;
	unsigned long int F1 = 1, F2 = 2, Fn;
	int i = 1;

	printf("%lu, %lu", F1, F2);
	for (i = 1 ; i <= n; i++)
	{
		if (i >= 3)
		{
		Fn = F1 + F2;
		printf(", %lu", Fn);

		F1 = F2;
		F2 = Fn;
		}
	}

	printf("\n");
	return (0);
}
