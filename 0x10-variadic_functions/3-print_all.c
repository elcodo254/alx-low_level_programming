#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int j = 0, i = 0;
	char *sp = "";

	my_form forms[] = {
		{"c", print_achar},
		{"i", print_anint},
		{"f", print_afloat},
		{"s", print_achar_arr},
	};

	va_start(valist, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *forms[j].c)
			{
				printf("%s", sp);
				forms[j].f(&valist);
				sp = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}

/**
 * print_achar - prints next char in va_list
 * @valist: the working va_list
 */
void print_achar(va_list *valist)
{
	printf("%c", va_arg(*valist, int));
}

/**
 * print_anint - prints next integer
 * @valist: the working va_list
 */
void print_anint(va_list *valist)
{
	printf("%d", va_arg(*valist, int));
}

/**
 * print_afloat - prints next float
 * @valist: the working va_list
 */
void print_afloat(va_list *valist)
{
	printf("%f", va_arg(*valist, double));
}

/**
 * print_achar_arr - prints next char array
 * @valist: the working va_list
 */
void print_achar_arr(va_list *valist)
{
	char *s = va_arg(*valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
