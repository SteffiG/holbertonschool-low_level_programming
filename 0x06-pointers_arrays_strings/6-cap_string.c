#include "holberton.h"

/**
 * cap_string - Function that capitalizes all words of a string
 * @n: is a parameter
 * Return: 0
 */

char *cap_string(char *n)
{
	int i, x, c = 32;
	int separators[] = {',', ';', '.', '?', '"',
			    '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - c;
		}

		c = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[i] == separators[x])
			{
				x = 12;
				c = 32;
			}
		}
	}
	return (n);
}
