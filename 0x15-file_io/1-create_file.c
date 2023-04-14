#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int cr, r, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	cr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(cr, text_content, len);

	if (cr == -1 || r == -1)
		return (-1);

	close(cr);

	return (1);
}
