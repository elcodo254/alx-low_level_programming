#include "main.h"
/**
 * _strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *Return: 0 if contains same string
 */
int _strcmp(char *s1, char *s2)
{
	int i  = 0, lp = 0;

	while (lp == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		lp = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (lp);
