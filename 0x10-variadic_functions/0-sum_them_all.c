#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all parameters after n
 * @n: number of parameters received after n
 *
 * Return: integer value of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, sum = 0;

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);
	
	return (sum);
}
