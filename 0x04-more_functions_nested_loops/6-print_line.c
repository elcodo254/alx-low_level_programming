#include "main.h"

/**
 * print_line - print underscore to forn lines
 *@n: number of times underscore is printed
 *
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
