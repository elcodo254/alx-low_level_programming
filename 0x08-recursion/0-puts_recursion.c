#include "main.h"

/**
 * _puts_recursion - print string followed by new line
 * @s: string to be printed
 * Return: 0 success
 */
void _puts_recursion(char *s)
{


		_putchar(*s);
		_puts_recursion(s + 1);
		_putchar('\n');

}
