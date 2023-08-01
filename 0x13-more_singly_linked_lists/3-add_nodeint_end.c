#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node at the end of a listint_t list
 * @head: pointer to the first node
 * @n: value to insert in the new element
 *
 * Return: pointer to the new node, or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_N;
	listint_t *temp = *head;

	new_N = malloc(sizeof(listint_t));
	if (!new_N)
		return (NULL);

	new_N->n = n;
	new_N->next = NULL;

	if (*head == NULL)
	{
		*head = new_N;
		return (new_N);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_N;

	return (new_N);
}
