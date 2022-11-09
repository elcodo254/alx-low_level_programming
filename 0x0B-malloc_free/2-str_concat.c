#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to space in memory, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, len = 0;
	char *ptr = NULL;
	char *as1 = s1;
	char *as2 = s2;

	if (as1 == NULL)
		as1 = "";
	if (as2 == NULL)
		as2 = "";

	ptr = as1;
	while (*ptr++)
		i++;

	ptr = as2;
	while (*ptr++)
		i++;

	i++;
	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (*as1)
	{
		ptr[i++] = *as1++;
	}

	while (*as2)
	{
		ptr[i++] = *as2++;
	}
	ptr[i] = *as2;

	return (ptr);
}
