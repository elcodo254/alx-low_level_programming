#include "main.h"

/**
 * string_toupper - change all lower case to upper
 * @str: string to be changed
 * Return: pointer to changed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
