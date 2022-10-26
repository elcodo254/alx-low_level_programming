#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: always 0
 */
void rev_string(char *s)
{
	int length, i, j;
	char w1, w2;

	for (length = 0; s[length] != '\0'; length++)
	{

	}
		j = length - 1;
		i = 0;

	while (j > i)
	{
		w1 = s[i];
		w2 = s[j];
		s[i] = w2;
		s[j] = w1;
		j--;
		i++;
	}
}
