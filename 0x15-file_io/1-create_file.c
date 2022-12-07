#include "main.h"

/**
 * create_file - create file
 * @filename: pointer to file
 * @text_content: pointer to string to write to the file
 *
 * Return: -1 failure, 1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
