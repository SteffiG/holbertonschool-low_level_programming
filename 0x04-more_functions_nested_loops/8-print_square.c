#include "holberton.h"

/**
 * print_square - Function that prints a square
 * @size: is a parameter
 * Return: 0
 */

void print_square(int size)
{
	int s1, s2;

	for (s1 = 1; s1 <= size; s1++)
	{
		for (s2 = 1; s2 <= size; s2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
