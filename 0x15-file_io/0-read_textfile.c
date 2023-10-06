#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: name of a file
 * @letters: letters
 *
 * Return: Actual number of letters it could read
 * and print. If the file can not be opened or read,
 * 0, 0 if filename is NULL  and 0 if write fails or
 * does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wt;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, rd);

	if (opn == -1 || rd == -1 || wt == -1 || wt != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opn);

	return (wt);
}
