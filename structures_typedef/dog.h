#ifndef DOG_H
#define DOG_H


#include <stdio.h>
#include <stdlib.h>
/**
 *struct dog - dog wao wao
 *@name: name oif the dog
 *@age: name of the dog
 *@owner: owner of the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - new wao wao
 *
 *
 *
 */
typedef struct dog dog_t;
void print_dog(struct dog *d);

#endif
