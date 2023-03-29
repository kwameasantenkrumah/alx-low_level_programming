#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: the pointer to the destination
 * @src: the string to be copied.
 * @n: number of characters to be copied from source.
 * Return: the pointer to the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
