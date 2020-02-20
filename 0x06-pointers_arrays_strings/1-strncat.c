#include "holberton.h"

/**
 * *_strncat - Function that concatenates two string
 * @dest: is a parameter
 * @src: is a parameter
 * @n: is a parameter
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, x;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (x = 0; x < n; x++)
	{
		dest[i + x] = src[x];
		if (src[x] == '\0')
		{
			x = n;
		}
	}

	return (dest);
}
