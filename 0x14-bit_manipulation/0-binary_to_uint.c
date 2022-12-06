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
	unsigned int dgts = 0;
	int i = 0;

	if (b[i] == '\0')
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		dgts <<= 1;
		dgts += b[i] - '0';
		i++;
	}
	return (dgts);
}
