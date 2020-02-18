#include "holberton.h"

/**
 * _strcpy - Function that copies the string pointed to by src, including the
 * terminating null byte, to the buffer pointed to by dest
 * @dest: is a parameter
 * @src: is a parameter
 * Return: 0
 */

char *_strcpy(char *dest, char *src)

{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
