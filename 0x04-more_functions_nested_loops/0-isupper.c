#include "holberton.h"

/**
 * _isupper - Function that chcks for uppercase character
 * @c: is a parameter
 * Return: 0
 */

int _isupper(int c)
{
	char n;

	for (n = 'A'; n <= 'Z'; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}
	return (0);
}
