#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - initialize var for structure dog
 *@d: var in use
 *@name: var for name ptr
 *@age: var for age
 *@owner: var for owner ptr
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
