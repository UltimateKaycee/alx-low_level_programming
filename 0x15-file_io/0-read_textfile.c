#include "main.h"
/**
  * read_textfile - function to read textfile and print
  * to POSIX standard output
  * @filename: file name of read file
  * @letters: num of chars to print
  * Return: 0n success - 0
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int text-file, all, state;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	text-file = open(filename, O_RDONLY);
	if (text-file == -1)
		return (0);
	all = 0;
	state = 1;
	while (letters > BUFSIZE && state != 0)
	{
		state = read(text-file, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, state);
		all += state;
		letters -= BUFSIZE;
	}
	state = read(text-file, buffer, letters);
	write(STDOUT_FILENO, buffer, state);
	all += state;
	close(text-file);
	return (all);
}
