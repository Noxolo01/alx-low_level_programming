#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 *
 * @n: the int input
 * @index: the index of the bit
 * return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	return ((n & i) > 0);
}
