#include "lists.h"

/**
 * free_dlistint - free memory of all list.
 * @head: pointer to head in fucntion
 * Return: Always success.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
