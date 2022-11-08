#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds two numbers from arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(success) otherwise 1 if arg contains symbols
 */
int main(int argc, char *argv[])
{
	int count, add, i, length;
	char *ptr;

	if ((argc - 1) == 0)
	{
		printf("0\n");
	}
	else
	{
		add = 0;
		
		for (count = 1; count < argc; count++)
		{
			ptr = argv[count];
			length = strlen(ptr);

			for (i = 0; i <= length; i++)
			{
				if (isdigit(*(ptr + 1)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[count]);
		}
		printf("%d\n", add);
	}
	return (0);
}
