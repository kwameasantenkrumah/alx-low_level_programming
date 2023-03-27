#include "main.h"


/**
 * print_rev - This  function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: The string to be printed
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	for (k = k - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
