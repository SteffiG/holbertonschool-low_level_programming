#include "holberton.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 * @c: is a parameter
 * Return: 0
 */

int _isalpha(int c)
{
if (c == 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
