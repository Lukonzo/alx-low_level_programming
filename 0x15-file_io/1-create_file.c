#include "main.h"

/**
 * create_file - A function that creates a file
 *
 * @filename: name of a fil
 * @text_content: contents of the file
 *
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int opn, wt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(opn, text_content, len);

	if (opn == -1 || wt == -1)
		return (-1);

	close(opn);

	return (1);
}
