#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: is a parameter
 * @n: is a parameter
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	while (i < n - 1)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}
