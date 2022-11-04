#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - finds out if number is divisible
 * @num: number
 * @div: divisor
 *
 * Return: 0 if divible, 1 otherwise.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - finds prime number
 * @n: number
 *
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
