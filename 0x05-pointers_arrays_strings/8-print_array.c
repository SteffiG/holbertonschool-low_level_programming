#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Function that prints n elements of an array of integers
 * @a: is a parameter
 * @n: is a parameter
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
