#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Print_list - A function that prints the elements in a linked list
 * @h: linked list head
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
