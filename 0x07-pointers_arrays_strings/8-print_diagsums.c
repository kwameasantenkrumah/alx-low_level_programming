#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - This function prints the sum of the
 * diagonals of a square matrix of integers.
 * @a: array
 * @size: size of array
 * Return: void
 */


void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int x;

	sum1 = 0;
	sum2 = 0;
	

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		sum2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

