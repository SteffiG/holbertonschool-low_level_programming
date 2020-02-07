#include <stdio.h>

/**
 *main - Entry point
 *putchar - print numbers
 *Return: 0
 */

int main(void)
{
int i, n, c;
for (i = 0; i < 100; i++)
{
n = i / 10;
c = i % 10;

putchar(n + '0');
putchar(c + '0');

if (i < 99)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
