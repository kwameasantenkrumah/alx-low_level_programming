#include "main.h"

/**
 * print_most_numbers - print the numbers
 * from 0 - 9 except 2 and 4
 * followed by a new line
 *
 * Return: 0
 */


void print_most_numbers(void)

{

	char c;


	for (c = '0'; c <= '9'; c++)

	{

	if (!(c == '2' || c == '4'))

		_putchar(c);

	}

		_putchar('\n');

}
