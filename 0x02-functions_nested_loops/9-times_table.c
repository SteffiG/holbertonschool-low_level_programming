#include "holberton.h"
/**
 * times_table - Function that prints the 9 times table.
 *
 * Return: 0
 */

void times_table(void)
{
	int c, f, p;
	for (c = 0; c <= 9; c++)
	{
		for (f = 0; f <= 9; f++)
		{
			p = c * f;
			if (p <= 9)
			{
				_putchar(p + '0');                                                                                                                                                     _putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
				_putchar(',');                                                                                                                                                         _putchar(' ');
			}
		}
		_putchar('\n');
	}
}
