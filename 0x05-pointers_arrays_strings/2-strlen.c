#include "holberton.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: is a parameter
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 1, d = 0;
	char n = s[0];

	while (n != '\0')
	{
		d++;
		n = s[i++];
	}
	return (d);
}
