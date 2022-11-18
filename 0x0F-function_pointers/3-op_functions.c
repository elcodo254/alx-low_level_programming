#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: first
 * @b: second
 *
 * Return: result of sum
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtracts one integer from another
 * @a: first
 * @b: second
 *
 * Return: results of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplys two integers
 * @a: first integer
 * @b: second
 *
 * Return: results of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divide an integre by another
 * @a: integer
 * @b: divisor
 *
 * Return: results
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - get remainder of division
 * @a: first integer
 * @b: second integer(divisor)
 *
 * Return: results
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
