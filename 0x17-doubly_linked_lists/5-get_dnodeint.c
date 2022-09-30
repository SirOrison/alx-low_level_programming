#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a listint_t
 * @head: pointer to head in function
 * @index: the node that will be returned
 * Return: nth node data
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (j = 0; j < index; j++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
