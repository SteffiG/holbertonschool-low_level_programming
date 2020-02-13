#include "holberton.h"

/**
 * isupper - Function that chcks for uppercase character
 * @c: is a parameter
 * Return: 0
 */

int _isupper(int c)
{
	int n;

	for (n = 65; n <= 90; n++)
	{
		if (c == n)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
