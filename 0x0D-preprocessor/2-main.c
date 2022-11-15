#include <stdio.h>

/**
 * main - print name of file current function is compiled from
 * Return: 0(always)
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
