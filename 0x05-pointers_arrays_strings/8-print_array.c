#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints `n` elements of an array of integers
 * followed by a new line.
 * @a: int type array pointer
 * @n: int type integer
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
