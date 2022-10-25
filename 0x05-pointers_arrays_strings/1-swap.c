#include "main.h"

/**
 * swap_int - swaps value of two integers
 *
 * @a: input saved to a
 * @b: input saved to b
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
