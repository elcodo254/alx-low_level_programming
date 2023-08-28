#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: converted number
 * otherwise 0 if non-binary numbers are in b or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dgts = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dgts <<= 1;

		if (b[i] == '1')
			dgts ^= 1;
		i++;
	}

	return (dgts);
}
