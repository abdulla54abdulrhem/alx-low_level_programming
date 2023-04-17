#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the properties of a dog
 * @d: Pointer to the struct dog
 *
 * Description: This function prints the properties of a struct dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
