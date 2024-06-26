#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - print list content
 *@h: ptr head of the list
 *Return: Count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[%d] (nil)\n", h->len);
	else
	printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
return (count);
}
