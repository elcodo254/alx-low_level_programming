#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string with separator between
 * @separator: string to be printed between
 * @n: number of strings to be passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	int s = 1;
	char *a;

	if (separator == NULL)
		s = 0;
	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(vl, char *);
		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);
		if (i < n - 1 && s != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}

