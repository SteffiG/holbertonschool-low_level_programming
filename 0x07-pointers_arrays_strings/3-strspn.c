#include "holberton.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: is a parameter
 * @accept: is a parameter
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;

	i = 0;
	while (s[i] != '\0')
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				break;
			}
		}
		if (s[i] != accept[n])
		{
			break;
		}
		i++;
	}
	return (i);
}
