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
	int a, b, c;
	char d;

	for (a = 0; s[a] != '\0'; a++)
		;

	c = a;
	for (a--, b = 0; b < c / 2; a--, c++)
	{
		d = s[b];
		s[b] = s[a];
		s[a] = d;
	}
}
