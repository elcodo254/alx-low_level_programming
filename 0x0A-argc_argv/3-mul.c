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
	int mult;

	if ((argc - 1) != 2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		mult = (atoi(argv[1]) * atoi(argv[2]));

		printf("%d\n", mult);

	}
	return (0);
}
