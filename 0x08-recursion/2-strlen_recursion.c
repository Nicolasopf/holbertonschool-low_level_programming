#include "holberton.h"

/**
 * _strlen_recursion -  return length of string.
 * @s: string
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i])
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
