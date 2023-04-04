#include "main.h"

/**
 * *_memcpy - This function copies memory area.
 * @dest : destination
 * @src: source
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
