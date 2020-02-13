#include "holberton.h"

/**
 * print_line - Function that draws a straight line in the terminal
 * @n: is a parameter
 * Return: 0
 */

void print_line(int n)
{
	int c;

	for (c = 0; c <= n; c++)
	{
		if (c < n)
		_putchar(95);
	}
	_putchar('\n');
}
