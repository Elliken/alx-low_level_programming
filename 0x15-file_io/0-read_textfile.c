#include "main.h"

/**
 * read_textfile- Read text file and prints to the STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: rd - actual number of bytes read and printed
 *        0 if the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t tf, rd, wr;

	tf  = open(filename, O_RDONLY);
	if (tf == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	rd = read(tf, file, letters);
	wr = write(STDOUT_FILENO, file, rd);

	free(file);
	close(tf);
	return (wr);
}
