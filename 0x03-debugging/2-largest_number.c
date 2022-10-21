#include "main.h"
#include <stdio.h>

/**
 * largest_number - return the largest of three numbers
 *
 * @a: first number
 * @b: second number
 * @c: third number
 *
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest = c;

	if (b > c)
	{
		largest = b;
	}
	else if (a > c)
	{
		largest = a;
	}

	return (largest);
}
