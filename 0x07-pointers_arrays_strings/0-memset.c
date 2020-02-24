#include "holberton.h"

/**
 * *_memset - Function that fills memory with a constant byte
 * @s: is a parameter
 * @b: is a parameter
 * @n: is a parameter
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
