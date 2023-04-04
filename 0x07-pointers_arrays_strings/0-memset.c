#include "main.h"

/**
 * *_memset - This function fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: maximum bytes to use
 * Return: pointer to put the constant @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; n > 0; d++, n--)
	{
		s[d] = b;
	}

	return (s);
}
