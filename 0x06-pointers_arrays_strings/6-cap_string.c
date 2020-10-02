#include "holberton.h"

/**
 * cap_string - capital letters.
 * @s: array
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 32 || s[i] == '\n' || s[i] == 44 || s[i] == 59
		    || s[i] == 46 || s[i] == 33 || s[i] == 63 || s[i] == 34
		    || s[i] == 40 || s[i] == 123 || s[i] == 125 || s[i] == '\t')
		{
			if (s[i + 1] <= 122 && s[i + 1] >= 97)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		if (s[0] <= 122 && s[0] >= 97)
		{
			s[0] = s[0] - 32;
		}
		i++;
	}
	return (s);
}
