#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *sum_dlistint - sum of inside list
 *@head: head
 *
 *Return: current sum
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int suma = 0;

	while (current != NULL)
	{
		suma += current->n;
		current = current->next;
	}
	return (suma);
}
