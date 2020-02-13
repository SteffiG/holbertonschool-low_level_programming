#include "holberton.h"

/**
 * print_diagonal- Function that draws a diagonal line on the terminal
 * @n: is a parameter
 * Return: 0
 */

void print_diagonal(int n)
{
	int d1, d2;

	for (d1 = 1; d1 <= n; d1++)
	{
		for (d2 = 2; d2 <= d1; d2++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
	{
		_putchar('\n');
	}
}
