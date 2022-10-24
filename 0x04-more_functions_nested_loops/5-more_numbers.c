#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
 */
void more_numbers(void)
{
	int numbers;
	int count = 0;

	while (count++ <= 9)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)

				_putchar((numbers / 10) + 48);
			_putchar((numbers % 10) + 48);
		}
		_putchar('\n');
	}
}
