#include "main.h"
/**
 * reverse_array - This function reverses the content
 *  an array of integers.
 * @a: an array of integers
 * @n: number of elements of an array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
