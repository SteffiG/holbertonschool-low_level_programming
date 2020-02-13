#include "holberton.h"

/**
 * print_numbers - Function that prints the numbers, from 0 to 9
 * _putchar
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
