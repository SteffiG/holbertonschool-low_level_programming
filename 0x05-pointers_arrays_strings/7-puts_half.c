#include "holberton.h"

/**
 * puts_half - Function that prints half of a string
 * @str: is a parameter
 * Return: 0
 */

void puts_half(char *str)
{
	int n, i, c = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}

	n = (c / 2);

	for (i = n; str[i] != '\0'; i++)
	{
		if ((n % 2) == 1)
		{
			n = ((c - 1) / 2);
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
