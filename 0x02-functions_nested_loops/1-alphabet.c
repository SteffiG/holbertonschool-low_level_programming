#include "holberton.h"

/**
 * main - Function main, check the code
 * print_alphabet - function that prints the alphabet
 * _putchar
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
return (0);
}
