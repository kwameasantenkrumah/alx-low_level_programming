#include "main.h"

/**
 * _strcpy - This function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: char type string
 * @src: char type string
 *
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	*(dest + a) = '\0';
	return (dest);
}


