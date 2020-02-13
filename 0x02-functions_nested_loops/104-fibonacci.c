#include <stdio.h>

/**
 * main - prints the first 98 number
 *
 * Return: 0
 */

int main(void)
{
	long l1, l1a, l1b, l2, l2a, l2b, l3, l3a, l3b;
	long div = 10000000000;

	l1 = 0;
	l2 = 1;
	int c = 1;

	for (c = 0; c < 91; c++)
	{
		l3 =  l2 + l1;
		l1 = l2;
		l2 = l3;
		printf("%ld, ", l3);
	}
        l1a = l1 / div;
	l1b = l1 % div;
	l2a = l2 / div;
	l2b = l2 % div;
	for (c = 0; c < 98; c++)
	{
		l3a = l1a + l2a;
		l3b = l1b + l2b;
		if (l3b > div)
		{
			l3b = l3b % div;
			l3a++;
		}
		if (c != 97)
		{
			printf("%ld%ld, ", l3a, l3b);
			l1a = l2a;
			l1b = l2b;
			l2a = l3a;
			l2b = l3b;
		}
		else
			printf("%ld%ld\n", l3a, l3b);
	}
	return (0);
}
