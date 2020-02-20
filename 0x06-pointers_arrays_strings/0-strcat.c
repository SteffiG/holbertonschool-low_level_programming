#include "holberton.h"

/**
 * *_strcat - Function that concatenates two string
 * @dest: is a parameter
 * @src: is a parameter
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}

	return (dest);
}
