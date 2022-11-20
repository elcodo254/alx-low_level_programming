#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum all parameters after n
 * @n: number of parameter passed
 * @...: variable number of parameters
 *
 * Return: 0 if n == 0 otherwise integer value of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, sum;

	va_start(valist, n);

	if (n == 0)
		return (0);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
