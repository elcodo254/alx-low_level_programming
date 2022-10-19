#include "main.h"

/**
 * print_sign - Prints the sign number
 * @n: The number of which the sign will be printed
 *
 * Return: 1 if the number is greater than zero, 0 if the number is zero, -1 if the number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else
	{
		_putchar('-');
		return (-1);

	}
}