#include "holberton.h"
/**
 *sqrrevision - check if have a natural sqrt
 *@a: number to check
 *@b: second number
 *Return: int
 */
int sqrrevision(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (sqrrevision(a, b + 1));
}

/**
 *_sqrt_recursion - natural square root of a number
 *@n: number
 *Return: int
 */
int _sqrt_recursion(int n)
{
	return (sqrrevision(n, 1));
}
