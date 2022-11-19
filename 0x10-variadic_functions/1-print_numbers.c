#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print input with a given separator between them
 * @separator: string to be printed
 * @n: number of integers passed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	int s = 1;

	if (separator == NULL)
	{
		s = 0;
	}
	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));

		if (i < n - 1 && s != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}
