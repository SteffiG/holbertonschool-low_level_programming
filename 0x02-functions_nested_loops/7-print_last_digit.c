#include "holberton.h"

/**
 *print_last_digit - Function that prints the last digit of a number.
 *@n: is a parameter
 *Return: 0
 */

int print_last_digit(int n)
{
if (n > 0)
{
n = n % 10;
_putchar('0' + n);
return (n);
}
else
{
n = n * -1;
n = n % 10;
_putchar('0' + n);
return (n);
}
return (0);
}
