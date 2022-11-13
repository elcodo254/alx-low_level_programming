#include "main.h"

/**
 * _memset - fills first n bytes of memory area
 * @n: bytes to be filled
 * @s: pointer to memory area
 * @b: constant byte of memory area
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
