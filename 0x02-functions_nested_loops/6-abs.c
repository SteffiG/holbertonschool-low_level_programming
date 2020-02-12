#include "holberton.h"

/**
 * _abs - Function that computes the absolute value of an integer.
 * @n: is a parameter
 * Return: 0
 */

int _abs(int n)
{
if (n > 0)
{
return (n);
}
else
{
n = n * -1;
return (n);
}
return (0);
}
