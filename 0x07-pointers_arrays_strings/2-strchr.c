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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	while (*s == '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
