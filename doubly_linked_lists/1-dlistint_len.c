#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *dlistnt_len - length of double list
 *@h: pointer in use for var
 *
 *Return: 0
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t node_count = 0;

	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}
return (node_count);
}
