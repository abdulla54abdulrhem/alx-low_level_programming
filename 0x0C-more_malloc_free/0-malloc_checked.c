#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocate memory of size b
 * @b : unisnged integer
 * Return: pointer or void
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
