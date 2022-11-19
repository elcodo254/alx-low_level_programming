#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct form_t - struct form_t
 *
 * @c: data type
 * @f: associated function
 */
typedef struct form_t
{
	char *c;
	void (*f)(va_list*);
} my_form;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif/*VARIADIC_FUNCTIONS_H*/
