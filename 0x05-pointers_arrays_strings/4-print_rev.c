#include "holberton.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: is a parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int c = 0, i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	for (x = c; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
