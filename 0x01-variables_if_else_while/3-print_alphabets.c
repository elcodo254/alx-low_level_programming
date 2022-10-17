#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char locase;
	char upcase;

	for (locase = 'a'; locase <= 'z'; locase++)
	{
		putchar(locase);
	}
	for (upcase = 'A'; upcase <= 'Z'; upcase++)
	{
		putchar(upcase);
	}
	putchar('\n');
	return (0);
}
