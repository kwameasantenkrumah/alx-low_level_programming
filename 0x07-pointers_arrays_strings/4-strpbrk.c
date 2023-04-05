#include "main.h"

/**
 * _strpbrk - This function searches a string for any set of bytes
 * @s: the string to be searched for
 * @accept: the set of bytes to be searched for.
 * Return:  a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found.
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
