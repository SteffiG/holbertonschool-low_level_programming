#include "holberton.h"

/**
 * print_triangle - Function that prints a triangle
 * @size: is a parameter
 * Return: 0
 */

void print_triangle(int size)
{
	int x, y, z;

	for (x = 0; x < size; x++)
	{
		z = size - x;
		for (y = 1; y <= size; y++)
		{
			if (y < z)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
