#include "main.h"

/**
 * _strlen - This function returns the length of a string
 * @s: character variable
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}
