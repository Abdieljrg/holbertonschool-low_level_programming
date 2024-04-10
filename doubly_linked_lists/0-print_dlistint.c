#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dlistint - print double lists
 *@h: pointer for input
 *
 *
 *Return: cero if true
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t in;

	for (in = 0; h != NULL; in++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (in);
}
