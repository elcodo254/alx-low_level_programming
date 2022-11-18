#include "3-calc.h"

/**
 * get_op_func - select the correct function asked by the operator
 * @s: string holding the operator
 *
 * Return: pointer to function corresponding to operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (s[0] != *ops[i].op && i < 4)
	{
		i++;
	}
	if (s[i] != '\0' || s == NULL || s[0] != *ops[i].op)
	{
		printf("Error\n");
		exit(99);
	}
	return (ops[i].f);
}
