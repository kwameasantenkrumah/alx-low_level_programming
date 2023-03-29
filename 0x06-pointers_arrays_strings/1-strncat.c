#include "main.h"

/**
 * _strncat - This function concatenates two strings
 * @dest: pointer to the destination
 * @src: string to be concatenated.
 * @n: number of characters to  be concatenated
 * Return: pointer to the resulting string 'dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
