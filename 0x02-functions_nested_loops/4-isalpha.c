#include "holberton.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 * @c: is a parameter
 * Return: 1 || 0
 */

int _isalpha(int c)
{
int i, n;
int num = 0;
for (i = 65; i <= 90; i++)
{
if (c == i)
num = 1;
}
for (n = 97; n <= 122; n++)
{
if (c == n)
num = 1;
}
return (num);
}
