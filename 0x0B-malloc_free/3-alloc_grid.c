#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2-D array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to the newly allocate 2-D array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ar;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}
	return (ar);
}

