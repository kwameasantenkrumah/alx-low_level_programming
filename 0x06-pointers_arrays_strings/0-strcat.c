#include "main.h"


/**
 * _strcat - This function concatenates two strings
 * @dest: pointer to the destination
 * @src: the string to be appended
 * Return: pointer to the resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
