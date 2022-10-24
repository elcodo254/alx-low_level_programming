#include "main.h"

/**
 * print_most_numbers - print numbers excluding 2 and 4
 *
 */
void print_most_numbers(void)
{
	int nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		if (nums == '2')
		{
			continue;
		}
		if (nums == '4')
		{
			continue;
		}
		_putchar(nums);
	}
	_putchar('\n');
}
