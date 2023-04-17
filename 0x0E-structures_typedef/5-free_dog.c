#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - Frees a dog structure
 * @d: Pointer to the struct dog
 *
 * Description: This function frees a struct dog and its attributes.
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
