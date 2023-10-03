#include "main.h"
/**
  * create_file - function to create a file
  * with rw------- permissions
  * @filename: the name of file
  * @text_content: the contents of the file
  * Return: on success = (1) and on failure = (-1)
  */
int create_file(const char *filename, char *text_content)
{
	int file, length, stage;

	if (filename == NULL)
	return (-1);
	
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
	return (-1);
	if (text_content == NULL)
	{
	close(file);
	return (1);
	}
	for (length = 0; text_content[length]; length++)
	;
	stage = write(file, text_content, length);

	if (close(file) == -1)
	return (-1);
	return (stage == -1 ? -1 : 1);
}
