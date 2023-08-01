#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: pointer first node
 *
 * Return: number nodes
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
