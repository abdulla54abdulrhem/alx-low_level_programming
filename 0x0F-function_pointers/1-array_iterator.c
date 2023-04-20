#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - Execute a callback function on each element of an array.
 *
 * @array: A pointer to the array to iterate over.
 * @size: The number of elements in the array.
 * @action: A function pointer to the callback function to execute on each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
  unsigned int j;

  if (action == NULL || array == NULL)
  {
    exit(98);
  }

  for (j = 0; j < size; j++)
  {
    action(array[j]);
  }
}
