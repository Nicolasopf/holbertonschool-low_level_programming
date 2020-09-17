#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 *
 */

int main(void)
{
int c;
do {
for (c = 0; c <= 9; c++)
{
putchar(c + 48);
if (c != 9)
{
putchar(',');
putchar(' ');
}}
} while (c < 9);
putchar('\n');
return (0);
}
