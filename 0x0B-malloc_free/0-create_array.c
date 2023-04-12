#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates char array
 * @size : unsigned int
 * @c : the char to be initialized with
 *
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
    int i;
    char *array;
    array = malloc(size * sizeof(char));
    for (i = 0; i < (int) size; i++)
    {
        array[i] = c;
    }
    return (array);
}
