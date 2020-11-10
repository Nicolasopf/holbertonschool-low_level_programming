#include "holberton.h"

/**
 * create_file - Function that creates a file
 * @filename: Name of the file
 * @text_content: content of the text
 * Return: 1 if works, -1 if not.
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0, fi, rw;

	if (filename)
	{
		fi = open(filename, O_WRONLY | O_APPEND);
		if (fi == -1)
			return (-1);
		if (text_content && text_content[len])
		{
			while (text_content[len])
				len++;
			rw = write(fi, text_content, len);
			if (rw == -1)
				return (-1);
		}
		close(fi);
		return (1);
	}
	return (-1);
}
