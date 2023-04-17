#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - Creates a new dog with given properties
 * @name: Pointer to a char that represents the name of the dog
 * @age: Float that represents the age of the dog
 * @owner: Pointer to a char that represents the owner of the dog
 *
 * Description: This function creates a new dog with the given properties.
 *
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
