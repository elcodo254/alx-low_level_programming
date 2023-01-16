#include"main.h"
/**
 * _strncat - concatenates two strings
 * @src: source
 * @dest: destination
 * @n: bytes from source
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0, count2 = 0;

	while (*(dest + count1) != '\0')
	{
		count1++;
	}

	while (count2 < n)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count1++;
		count2++;
	}
	return (dest);
}
