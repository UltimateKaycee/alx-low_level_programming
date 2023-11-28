#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - Function to allocate
 * 1024 bytes for a buffer.
 * @file: Name of file buffer stores chars for.
 *
 * Return: ptr to newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
	}

	return (buffer);
}

/**
 * close_file - function to close file
 * descriptors.
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int diver;

	diver = close(fd);

	if (diver == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	}
}

/**
 * main - Function to copy content of a
 * file to another file.
 * @argc: num of arguments for the program.
 * @argv: Array of ptrs for the arguments.
 *
 * Return: If successful - 0.
 */
int main(int argc, char *argv[])
{
	int source, dest, reader, writer;

	char *buffer;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	buffer = create_buffer(argv[2]);

	source = open(argv[1], O_RDONLY);

	reader = read(source, buffer, 1024);

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
	if (source == -1 || reader == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}
	writer = write(dest, buffer, reader);

	if (dest == -1 || writer == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
	}
	reader = read(source, buffer, 1024);

	dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (reader > 0);
	free(buffer);
	close_file(source);
	close_file(dest);
	return (0);
}
