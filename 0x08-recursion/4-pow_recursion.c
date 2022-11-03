#include "main.h"

/**
 * _pow_recursion - returns value of power of a number
 * @x: number
 * @y: power to raise number by
 *
 * Return: -1 if y is lower than 0 else value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
