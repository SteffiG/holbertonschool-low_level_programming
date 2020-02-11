#include "holberton.h"
/**
 * _islower - Function that checks for lowercase character
 * @c: is a parameter
 * Return: 0
 */

int _islower(int c)
{
int i;
int num = 0;
for (i = 97; i <= 122; i++)
{
if (c == i)
{
num = 1;
}
}
return (num);
}
