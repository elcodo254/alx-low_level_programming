#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two integers in argument
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(success) otherwise 1
 *if argument not availablle.
 */
int main(int argc, char *argv[])
{
	int mult, i;

	if (argc == 1 || argc ==2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		mult = 1;

		for (i = 1; i < 3; i++)
		{
			mult *= atoi(argv[i]);

			printf("%d\n", mult);
		}
	}
	return (0);
}
