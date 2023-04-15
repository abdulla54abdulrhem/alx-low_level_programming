#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size of the allocated space for ptr.
 * @new_size: The new size to allocate for the memory block.
 *
 * Return: If new_si
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    if (new_size == old_size)
        return (ptr);

    if (new_size > old_size)
    {
        free(ptr);
        ptr = malloc(new_size);
        return (ptr);
    }

    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }

    if (ptr == NULL)
    {
        ptr = malloc(new_size);
        return (ptr);
    }

    return (NULL);
}
