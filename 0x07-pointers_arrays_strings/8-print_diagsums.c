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
	int b;
	long int c = 0;
	long int e = 0;

	for (b = 0; b < size; b++)
	{
		e = e + *(a + b * size + b);
		c = c + *(a + b * size - b);
	}

	printf("%ld, %ld\n", e, c);
}

