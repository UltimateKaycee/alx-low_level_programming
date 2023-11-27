#include "main.h"
#include <stdlib.h>
/**
  * read_textfile - function to read textfile and print
  * to POSIX standard output
  * @filename: file name of read file
  * @letters: num of chars to print
  * Return: 0n success - 0
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opener, reader, writer;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	opener = open(filename, O_RDONLY);
	reader = read(opener, buffer, letters);
	writer = write(STDOUT_FILENO, buffer, reader);

	if (opener == -1 || reader == -1 || writer == -1 || writer != reader)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opener);

	return (writer);
}
