#include "main.h"

/**
 * append_text_to_file - appends file
 * @filename:pointer to name of file
 * @text_content: string to append to file
 *
 * Return: -1 if fail or filename is NULL,
 * file is nonexistent or no permission otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
