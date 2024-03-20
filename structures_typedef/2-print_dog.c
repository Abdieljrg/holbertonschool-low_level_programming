#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_field - helps organize dog function
 *@field: pointer fields inside b
 *
 */
void print_field(char *field)
{
	if (field == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", field);
	}
}

/**
 *print_dog - prints struct dog
 *@d: pointer of var d
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: ");
	print_field(d->name);

	printf("Age: ");
	if (d->age < 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%f\n", d->age);
	}

	printf("Owner: ");
	print_field(d->owner);
}
