#include "main.h"

/**
 * swap_int - This function swaps the values of two integers.
 * @a: pointer 1
 * @b: pointer 2
 */

void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;

}
