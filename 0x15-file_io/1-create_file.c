#include "main.h"

/**
 * create_file -  function that Creates a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string, for the filr to be written.
 *
 * Return: If the function fails return -1.
 *         if it doesn't return  - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int tr, wr, str = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str = 0; text_content[str];)
			str++;
	}

	tr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(tr, text_content, str);

	if (tr == -1 || wr == -1)
		return (-1);

	close(tr);

	return (1);
}
