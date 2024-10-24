#include <stdio.h>

/**
 * main - Entry point
 * Prints the first 50 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int n = 50;
	unsigned long long int F1 = 1, F2 = 2, Fn;

	printf("%llu, %llu", F1, F2);

	for (int i = 3; i <= n; i++)
	{
		Fn = F1 + F2;
		printf(", %llu", Fn);

		F1 = F2;
		F2 = Fn;
	}

	printf("\n");
	return (0);
}
