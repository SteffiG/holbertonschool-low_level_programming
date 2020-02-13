#include "holberton.h"

/**
 * more_numbers - Function that prints 10 times the numbers
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, v;

	v = 0;
	while (v <= 9)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		v++;
	}
}
