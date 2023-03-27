#include "main.h"

/**
 * _puts - This function prints a string
 * followed by a new line
 * @str:  String value
 * Return: Always 0
 */
void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}


