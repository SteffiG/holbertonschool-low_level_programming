#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - Function that searches a string for any of a set
 * of a bytes
 * @s: is a parameter
 * @accept: is a parameter
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
