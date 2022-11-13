#include "main.h"
/**
 * _strlen - returns length of string
 * @s: accepts input
 * Return: always 0
 */
int _strlen(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum += 1;
	}
	return (sum);
}
