#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given position
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (--index)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
	}
	if (!tmp->next)
		return (-1);
	tmp->next = tmp->next->next;
	if (tmp->next)
		tmp->next->prev = tmp;
	return (1);
}
