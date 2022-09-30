#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the linked list
 * @index: index at which to delete node
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	curr = *head;

	for (i = 0; curr != NULL && i < index; i++)
		curr = curr->next;
	if (curr == NULL)
		return (-1);
	if (*head == curr)
		*head = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	if (curr->prev != NULL)
		curr->prev->next = curr->next;
	free(curr);
	return (1);
}
