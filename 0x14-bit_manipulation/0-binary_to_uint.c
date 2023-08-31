#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int.
 * @b: string entry.
 *
 * return: converted number / 0 if there
 * are more chars in the string / b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		num <<= 1;
		num += *b++ - '0';
	}

	return (num);
}
