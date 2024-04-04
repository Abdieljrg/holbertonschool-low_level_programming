#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - new node at the beginning of a list_t list.
 *@head: ptr to ptr to the head
 *@str: string to the new node.
 *Return: new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
