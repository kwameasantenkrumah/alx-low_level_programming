#include "main.h"
/**
 * _puts_recursion - This function that prints
 * a string, followed by a new line.
 *
 * @s: the char pointer
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
