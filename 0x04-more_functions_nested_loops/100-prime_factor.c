#include <stdio.h>

/**
 * main - print largest prime factor given a number
 *
 * Return: always 0
 */
int main(void)
{
	long num = 612852475143;
	long divs = 2;
	long largestprime = 0;

	while (num != 1)
	{
		if (num % divs == 0)
		{
			num = num / divs;
			largestprime = divs;
		}
		divs += 1;
	}
	printf("%ls\n", largestprime);
	return (0);
}
