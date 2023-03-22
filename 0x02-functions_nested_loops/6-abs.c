#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @d: character to be checked
 *
 * Return: d
 */

int _abs(int d)
{
	if (d < 0)
		d = -(d);
	else if (d >= 0)
		d = d;
	return (d);

}
