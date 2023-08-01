#include "lists.h"

/**
 * pop_listint - deletes the head node 
 * @head: pointer to the first element
 *
 * Return: value inside the elements deleted, or 0 
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int j;

	if (!head || !*head)
		return (0);

	j = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (j);
}
