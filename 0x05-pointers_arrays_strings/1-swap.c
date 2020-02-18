#include "holberton.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: is a parameter
 * @b: is a parameter
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
