#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_dnodeint_end - ads new node at the end of the list
 *@head: head of the list
 *@n: var in use
 *
 *Return: cero or null if it is true
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
new_node->n = n;
new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
		new_node->prev = last;
	}
	return (new_node);
}
