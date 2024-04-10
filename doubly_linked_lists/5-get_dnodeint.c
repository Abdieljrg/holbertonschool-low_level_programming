#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *get_dnode_t_index - gets node in use
 *@head: head of list
 *@index: index of program
 *Return: current
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	return (current);
}
