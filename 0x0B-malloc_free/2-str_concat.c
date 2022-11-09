#include "main.h"
#include <stdlib.h>

/**
 * str_concat -concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated
 * memory space with the tw strings otherwise NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, count = 0, len = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[count++] = s1[i];
	for (i = 0; s2[i]; i++)
		ptr[count++] = s2[i];

	return (ptr);
}
