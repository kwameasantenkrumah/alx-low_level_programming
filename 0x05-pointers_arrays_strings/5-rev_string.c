#include "main.h"


/**
 * rev_string - This function that reverses a string.
 *
 * @s: string parameter input
 *
 * Return: 0
*/

void rev_string(char *s)
{
	int a, b;
	char c;


	for (a = 0; s[a] != '\0'; ++a)
		;

	for (b = 0; b < a / 2; ++b)
	{
		c = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = c;
	}

}

