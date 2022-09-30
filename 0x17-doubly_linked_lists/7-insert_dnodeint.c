#include "lists.h"

/**
 * insert_dnodeint_at_index -  insert a node in a idx position
 * @h: pointer to head in function
 * @idx: index or position to be added
 * @n: node's value
 * Return: nth node data
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *curr;
	unsigned int j;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		curr = *h;
		for (j = 0; j < idx - 1 && curr != NULL; j++)
			curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = curr;
		next  = curr->next;
		curr->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
