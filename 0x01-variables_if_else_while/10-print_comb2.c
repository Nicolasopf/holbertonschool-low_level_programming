#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0
 *
 */

int main(void)
{

int c = 48;

int b = 48;

while (c <= 57)
{
for ( ; b <= 57; b++)
{
putchar(c);
putchar(b);
if (b == 57 && c == 57)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
b = 48;
c++;
}
return (0);
}
