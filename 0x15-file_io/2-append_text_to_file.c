#include "main.h"
#include <stdio.h>
/**
  * append_text_to_file - function to append text to a file
  * @filename: file to append text to
  * @text_content: the content to append to filename
  * Return: on success = (1) and on failure = (-1)
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int put_file, length, status;

	if (filename == NULL)
	return (-1);
	
	put_file = open(filename, O_WRONLY | O_APPEND);

	if (put_file == -1)
	return (-1);
	if (text_content == NULL)
	return (1);
	for (length = 0; text_content[length]; length++)
	;
	status = write(put_file, text_content, length);

	close(put_file);
	return (status == -1 ? -1 : 1);
}
