#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *@n: number whose last digit will be printed
 *
 * Return: last value of the number
 */
int print_last_digit(int n)
{
	int lstdgt = n % 10;

	if (lstdgt < 0)
		lstdgt *= -1;

	_putchar(lstdgt + '0');

	return (lstdgt);
}
