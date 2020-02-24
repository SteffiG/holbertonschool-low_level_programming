#include <stdio.h>
#include "holberton.h"

/**
 * *_strchr - Function that locates a character in a string
 * @s: is a parameter
 * @c: is a parameter
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < c; i++)
	{
		if (s[i] >= c)
		{
			return (s + i);
		}
	}
	return (00);
}
