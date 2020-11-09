#include "holberton.h"

/**
 * read_textfile - Read the text of a file
 * @filename: name of the file
 * @letters: Number letters to write
 * Return: number of letter, or 0 if file cann't be oppened or read,
 * if filename is NULL or if write doesn't write the amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi, rd, rw;
	char *buff;

	if (filename == NULL)
		return (0);

	fi = open(filename, O_RDONLY);

	if (fi == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	rd = read(fi, buff, letters);

	if (rd == -1)
	{
		free(buff);
		return (0);
	}

	rw = write(STDOUT_FILENO, buff, rd);
	if (rw == -1)
	{
		free(buff);
		return (0);
	}
	close(fi);
	free(buff);
	return (rd);
}
