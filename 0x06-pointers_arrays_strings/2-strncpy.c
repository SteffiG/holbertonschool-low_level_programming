#include "holberton.h"

/**
 * *_strncpy - Function that copies a string
 * @dest: is a parameter
 * @src: is a parameter
 * @n: is a parameter
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	/**
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (0);
	**/
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		/*	dest[i] = src[i];*/
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (dest[i] == '\0')
			i = n;
		/*dest[i] = '\0';*/
	}

	return (dest);
}
