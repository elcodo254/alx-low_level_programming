#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largst of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (b > c || b == c)
	{
		if (a > b && a > c)
		{
			largest = a;
		}
	}
	else if (a > c || a == c)
	{
		if (b > a && a > c)
		{
			largest = b;
		}
	}
	else if (a > b || a == b)
	{
		largest = c;
	}

	return (largest);
}
