#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *delete_dnodeint_at_index - delete node at index
 *@head: head of the list
 *@index: index in use
 *
 *Return: 1 if true, -1 if NULL
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);

		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;
	if (current == NULL)
		return (-1);

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
