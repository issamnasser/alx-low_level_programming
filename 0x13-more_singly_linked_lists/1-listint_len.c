#include "lists.h"

/**
 * listint_len - print number of elements in a linked lists
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}

	return (k);
}
