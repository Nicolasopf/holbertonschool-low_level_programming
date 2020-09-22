#include "holberton.h"

/**
 *_abs - convert into absolute
 *@j: var
 *Return: absolute value
 */

int _abs(int j)
{
	if (j < 0)
	{
		j = j * -1;
		return (j);
	}
	else
		return (j);
}
