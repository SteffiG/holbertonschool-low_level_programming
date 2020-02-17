#include "holberton.h"

/**
 * rev_string - Function that reverses a string
 * @s: is a parameter
 * Return: 0
 */

void rev_string(char *s)
{
	char r = s[0];
	int c = 0, i;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		r = s[i];
		s[i] = s[c];
		s[c] = r;
	}
}
