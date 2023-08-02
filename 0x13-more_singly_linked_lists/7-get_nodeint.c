#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list
 *
 * @head: to first node of the list
 * @index: nth node
 *
 * Return: data of nth node or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
