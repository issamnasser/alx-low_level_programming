#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list freed
 *
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *free;

	while (head)
	{
		free = head->next;
		free(head);
		head = free;
	}
}
