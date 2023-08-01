#include "lists.h"

/**
 * print_listint -  function that prints elements of a linked list
 * @h: pointer to first node
 * 
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		k++;
		h = h->next;
	}

	return (k);
}
