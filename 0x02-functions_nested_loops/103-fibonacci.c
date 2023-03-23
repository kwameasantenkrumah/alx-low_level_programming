#include <stdio.h>

/**
 * main - function that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int cn;
	unsigned long int m, k, next, sum;
	m = 1;
	k = 2;
	sum = 0;

	for (cn = 1 ; cn <= 33 ; cn++)
	{
	if (m < 4000000 && (m % 2) == 0)
	{
	sum = sum + m;
	}
	next = m + k;
	m = k;
	k = next;
	}
	printf("%1u\n", sum);

	return (0);
}
