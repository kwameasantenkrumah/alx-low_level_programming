#include "main.h"

/**
 * rot13 -This function encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */

char *rot13(char *str)
{
	int i;
	int j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
