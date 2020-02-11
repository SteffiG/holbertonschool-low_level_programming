#include "holberton.h"

/**
 * print_alphabet - Function that prints 10 times the alphabet
 * _putchar 
 * Return: 0
 */

void print_alphabet_x10(void);

{

int d;
char c;

d = 0;
while (d <= 10)
{

for (c = 'a'; c <= 'z'; c++)

{
_putchar(c);
}

 _putchar('\n');
d++
}
}
