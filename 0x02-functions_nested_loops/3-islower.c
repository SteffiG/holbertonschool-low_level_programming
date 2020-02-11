#include "holberton.h"
/**
 * _islower - Function that checks for lowercase character
 * @c: is a parameter
 * Return: 0
 */

int _islower(int c)
{
for (c = 97; c <= 122; c++)
{
if (c == 97 && c <= 122)
{
return (1);
}
}
return (0);
}
