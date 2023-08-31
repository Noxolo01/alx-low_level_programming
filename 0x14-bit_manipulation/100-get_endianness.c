#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * @n: the input
 *
 * return: 0 for big endian / 1 for little endian
 */

int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
