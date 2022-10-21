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
	int largest;

	if (c > a || c == a)
	{
		if (b > c)
		{
			largest = b;
		}
	}
	if (a > b || a == b)
	{
		if (c > a)
		{
			largest = c;
		}
	}
	if (b > c || b == c)
	{
		if (a > b)
		{
			largest = a;
		}
	}

	return (largest);
}
