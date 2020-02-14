#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	long int  i, n;
	int  d;

	i = 612852475143;
	n = i;
	d = 2;
	while (n != 1)
	{
		if (n % d == 0)
		{
			n = n / d;
		}
		else
		{
			d++;
		}
	}
	printf("%d\n", d);
	return (0);
}
