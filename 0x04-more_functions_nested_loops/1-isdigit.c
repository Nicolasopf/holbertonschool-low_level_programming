#include "holberton.h"

/**
 * _isdigit - check if is a digit
 * @c: int for the digit
 * Return: 1 if a digit from 0 to 9, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
