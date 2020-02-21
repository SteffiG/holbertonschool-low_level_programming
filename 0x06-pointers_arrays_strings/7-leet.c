#include "holberton.h"

/**
 * leet - Function that encodes a string int 1337
 * @n: is a parameter
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int i, x;
	int f[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int r[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == f[x])
			{
				n[i] = r[x / 2];
				x = 9;
			}
		}
	}

	return (n);
}
