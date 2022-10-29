#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: pointer to dest
 */
char *leet(char *str)
{
	int i = 0, i2;
	char leet[8] = {'O', 'L', '?', 'E', 'A',
'?', '?', 'T'};

	while (str[i])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (str[i] == leet[i2] ||
str[i] - 32 == leet[i2])
				str[i] = i2 + '0';
		}
		i++;
	}
	return (str);
}
