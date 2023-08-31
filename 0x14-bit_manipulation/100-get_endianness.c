#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * @n: the input
 *
 * return: 0 for big endian / 1 for little endian
 */

int get_endianness(void)
{
	unsigned int n;
	char *c;

	n = 1;
	c = (char *) & n;

	return ((int)*c);
}
