#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees list_t
 * @head: ptr to head of the list
 * Return: Null
 */
void free_list(list_t *head)
{
list_t *here = head;
list_t *next_node;

	while (here)
	{
		next_node = here->next;
		free(here->str);
		free(here);
		here = next_node;
	}
}

