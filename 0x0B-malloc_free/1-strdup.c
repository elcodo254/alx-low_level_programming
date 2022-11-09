#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a
 * new string which is a duplicate of the string str.
 * @str: string
 *
 * Return: NULL if str==NULL or insufficient
 * memory available otherwise a pointer
 */

char *_strdup(char *str)
{
	char *ptr = str;
	int count;

	if (str == NULL)

		return (NULL);
	while (*ptr++ != '\0')
		count = count + 1;

	ptr = malloc((count + 1) * (sizeof(char)));

	if (ptr == NULL)
		return (NULL);

	count = 0;
	while (*str)
		ptr[count++] = *str++;

	ptr[count] = *str;

	return (ptr);
}
