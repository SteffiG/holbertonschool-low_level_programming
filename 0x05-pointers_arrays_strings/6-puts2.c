#include "holberton.h"

/**
 * puts2 - Function that prints every other characters of a string
 * @str: is a parameter
 * Return: 0
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 == 0)
		{
		_putchar(str[n]);
		}
	}
	_putchar('\n');
}
