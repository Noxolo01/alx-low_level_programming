#include "main.h"

/**
 * clear_bit - a function that sets the value of
 * a bit to 0 at a given index.
 *
 * @n: unsigned long int pointer
 * @index: the index of the bit
 *
 * return: 1 if Successful / -1 is there is an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
