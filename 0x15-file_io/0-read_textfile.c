#include "main.h"
/**
  * read_textfile - function to read a text file and
  * print it to the POSIX standard output STDOUT
  * @filename: filename to read
  * @letters: num of characters to print
  * Return: 0 on success
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int text_file, all, stage;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	text_file = open(filename, O_RDONLY);
	if (text_file == -1)
		return (0);
	all = 0;

	stage = 1;

	while (letters > BUFSIZE && stage != 0)
	{
	stage = read(text_file, buffer, BUFSIZE);

	write(STDOUT_FILENO, buffer, stage);

	all += stage;

	letters -= BUFSIZE;

	}

	stage = read(text_file, buffer, letters);

	write(STDOUT_FILENO, buffer, stage);

	all += stage;

	close(text_file);
	return (all);
}
