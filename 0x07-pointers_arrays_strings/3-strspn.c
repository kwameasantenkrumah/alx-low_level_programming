#include "main.h"

/**
 * _strspn - This function gets the length
 * of a prefix substring.
 *
 * @s: the string to be searched
 * @accept: the prefix substring to be measured.
 * Return: the length of a prefix substring.
 */



unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;


	a = 0;
	c = 0;


	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			break;
		a++;
	}
	return (c);
}
