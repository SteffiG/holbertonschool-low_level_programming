#include "holberton.h"

/**
 * _isdigit - Function that checks for a digit (0 through 9)
 *@c: is a parameter
 * Return: 0
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
