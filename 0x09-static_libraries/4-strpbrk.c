#include "main.h"

/**
 * _strpbrk - locates first occurence for any of a set of bytes
 * @s: string
 * @accept: set of bytes
 * Return: pointer to byte in s otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
