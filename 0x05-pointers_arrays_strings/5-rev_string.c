#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: always 0
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	char word = s[0];

	while (s[j] != '\0')
	{
		j++;

		for (i = 0; i < j; i++)
		{
			i--;
			word = s[i];
			s[i] = s[j];
			s[j] = word;
		}
	}
}
