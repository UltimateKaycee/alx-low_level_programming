#include "main.h"
/**
 * append_text_to_file - Function to append text at
 * end of file.
 * @filename: ptr to name of file.
 * @text_content: String to add to end of file.
 *
 * Return: -1 if function fails or filename is NULL
 *         -1 if file doesn't exist
 *         1 if successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opener, writer, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opener = open(filename, O_WRONLY | O_APPEND);
	writer = write(opener, text_content, length);

	if (opener == -1 || writer == -1)
		return (-1);

	close(opener);

	return (1);
}
