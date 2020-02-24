#include "holberton.h"

/**
 * *_memcpy - Function that copies memory area
 * @dest: is a parameter
 * @src: is a parameter
 * @n: is a parameter
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
