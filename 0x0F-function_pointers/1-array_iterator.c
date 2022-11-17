#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter of array
 * @array: array to be iterarted
 * @size: size of array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action == NULL || array == NULL)
		return;

	while (size--)
		action(array[i++]);
}
