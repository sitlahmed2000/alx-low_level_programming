#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variables of type struct dog
 * @d: pointer to struct dog initialize
 * @name: name initialize
 * @age: age initialize
 * @owner: owner initialize
 */
void init_dog(struct dog *e, char *name, float age, char *owner)
{
	if (e == NULL)
		e = malloc(sizeof(struct dog));
	e->name = name;
	e->age = age;
	e->owner = owner;
}
