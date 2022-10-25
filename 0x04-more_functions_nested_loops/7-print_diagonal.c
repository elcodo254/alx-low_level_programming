#include "main.h"

/**
 * print_diagonal - print backslash to draw diagonal line
 * @n: number of times backslash to be printed
 */
void print_diagonal(int n)
{
	int i;
	int p;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (p = 0; p < i; p++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
