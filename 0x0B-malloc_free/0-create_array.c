#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,initialized by specific char
 * @size: size of the array
 * @c: specifc char
 *
 * Return: NULL if size is 0 or function fails otherwise a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
