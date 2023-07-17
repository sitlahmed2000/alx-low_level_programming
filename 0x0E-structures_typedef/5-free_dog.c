#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated for struct dog
 * @c: struct dog to free
 */
void free_dog(dog_t *c)
{
	if (c)
	{
		free(c->name);
		free(c->owner);
		free(c);
	}
}
