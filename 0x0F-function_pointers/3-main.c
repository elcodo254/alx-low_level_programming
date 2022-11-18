#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0(success) otherwise 1.
 */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = get_op_func(argv[2])(num1, num2);

	printf("%d\n", res);

	return (0);
}
