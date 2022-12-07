#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: pointer to bit
 * @index: index
 *
 * Return: 1 if success otherwise - 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n & ~(1 << index);
	return (1);
}
