#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{

	int numy;

	for (numy = '0'; numy <= '9'; numy++)
	{
		putchar(numy);

		if (numy != '9')
		{
			putchar(',');

			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
