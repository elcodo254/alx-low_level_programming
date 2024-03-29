#include "search_algos.h"
/**
 * binary_search - searches for a value in an array using linear search
 * @array: pointer to first element of array to be searched
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located otherwise -1
 *
 * Description: print the array being searched 0every time it changes
 * ( at the beginning and when you search a subarray)
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0; right < size - 1; right >= left)
	{
		printf("Searching in array:");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
