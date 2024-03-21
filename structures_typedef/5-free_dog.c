#include "dog.h"
/**
 *free_dog - function that frees strcture allocs
 *@d: pointer in use
 *
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
