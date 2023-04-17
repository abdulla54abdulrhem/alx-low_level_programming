#include "dog.h"
/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog
 * @name: Pointer to a char that represents the name of the dog
 * @age: Float that represents the age of the dog
 * @owner: Pointer to a char that represents the owner of the dog
 *
 * Description: This function initializes a struct dog with the given values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
