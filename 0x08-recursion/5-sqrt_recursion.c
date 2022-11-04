#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 *
 * Return: -1 if no natural square root else return value
 */
int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	
	if ((root * root) == n)
		return (_sqrt_recursion(n));
}
