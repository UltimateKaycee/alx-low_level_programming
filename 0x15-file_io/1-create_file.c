#include "main.h"

/**
 * create_file - function to create file.
 * @filename: pointer to name of the file
 * @text_content: ptr to string to write to file.
 *
 * Return: -1 If function fails and 1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int opener, writer, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opener = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writer = write(opener, text_content, length);

	if (opener == -1 || writer == -1)
		return (-1);

	close(opener);

	return (1);
}
