#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all nodes
 * @head: pointer to head in function
 * Return: the sum result
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
