#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int i);
int is_palindrome(char *s);

/**
 * find_strlen - find length of a string
 * @s: string
 *
 * Return: lenth of string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - check if string is a palindrome
 * @s: string
 * @len: length of the string
 * @i: index of string
 *
 * Retunr: 1 if palindrome otherwise 0
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - find out if string is a palindrome
 * @s: string
 *
 * Return: 1 if palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
