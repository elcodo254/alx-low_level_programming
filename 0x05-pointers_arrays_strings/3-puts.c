#include "main.h"

/**
 * _puts - print string
 * @str: string to be printed
 * Return: always 0
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
