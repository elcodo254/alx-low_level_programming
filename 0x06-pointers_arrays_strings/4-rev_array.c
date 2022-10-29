#include "main.h"

/**
 * reverse_array - reverses array
 * @n: the number of elements of the array
 * @a: array
 * Return: array in reverse
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
