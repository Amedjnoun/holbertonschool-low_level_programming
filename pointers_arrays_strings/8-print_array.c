#include "main.h"
#include <stdio.h>

void print_array(int *a, int n);

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}

/**
 * print_array - prints n elements of an array of integers
 * @arr: array of integers
 * @n: number of elements to be printed
 */

void print_array(int *arr, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", arr[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
