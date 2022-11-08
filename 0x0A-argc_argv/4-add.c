#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds two numbers from arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(success) otherwise 1 if arg contains symbols
 */
int main(int argc, char *argv[])
{
	int count, add, i;

	if ((argc - 1) == 0)
	{
		printf("0\n");
	}
	else
	{
		add = 0;
		
		for (count = 1; count < argc; count++)
		{
			/*ptr = argv[i];
			length = strlen(ptr);*/

			for (i = 0; i <= (*(argv[argc - 1])); i++)
			{
				if (isdigit(*(argv[count]) == 0))
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
