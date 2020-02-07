#include <stdio.h>

/**
 * main
 *
 *
 * Return: 0
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
else
{
return (0);
}
}
putchar('\n');
return (0);
}
