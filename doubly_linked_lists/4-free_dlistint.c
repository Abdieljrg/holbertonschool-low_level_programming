#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dlistint - frees list ints
 *@head: head of the list
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

