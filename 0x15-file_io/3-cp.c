#include "main.h"
#include <stdio.h>
/**
  * 3-cp.c - function to copy content of a file to
  * another file
  * @ac: number of arguments
  * @av: an array of arguments
  * Return: 0 on success
  */
int main(int ac, char *av[])
{
	int from_file, to_file, status_one, status_two;

	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;

	char buffer[BUFSIZE];

	if (ac != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from_file = open(av[1], O_RDONLY);

	if (from_file == -1)

	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	to_file = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (to_file == -1)

	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	status_one = 1;

	while (status_one)
	{
	status_one = read(from_file, buffer, BUFSIZE);
	if (status_one == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (status_one > 0)
	{
	status_one = write(to_file, buffer, status_one);
	if (status_two != status_one || status_two == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	}
	if (close(from_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file), exit(100);
	if (close(to_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_file), exit(100);
	return (0);
}
