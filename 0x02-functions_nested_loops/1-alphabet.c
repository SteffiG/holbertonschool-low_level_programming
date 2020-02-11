#include "holberton.h"

/**
 * print_alphabet - function that prints the alphabet
 * _putchar
 * Return: 0
 */
void print_alphabet(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
