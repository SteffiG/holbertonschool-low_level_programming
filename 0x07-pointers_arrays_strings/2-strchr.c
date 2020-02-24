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
	unsigned int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		i++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
