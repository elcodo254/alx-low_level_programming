#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: always 0
 */
void rev_string(char *s)
{
	int length, i, j;
	char word;

	for (length = 0; s[length] != '\0'; length++)
	{

	}
		j = length - 1;
		i = 0;

	while (s[j] != '\0')
	{
		j++;

		for (i = 0; i < j; i++)
		{
			word = s[i];
			s[i] = s[j];
			s[j] = word;
		}
	}
}
