#include "main.h"

/**
 * _strchr - This function locates character in a string.
 * @s: the string to be scanned
 * @c: character to be searched in @s
 * Return: NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
