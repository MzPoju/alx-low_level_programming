#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that fress dogs
 * @d: dog
 *
 * Return: Always zero
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
