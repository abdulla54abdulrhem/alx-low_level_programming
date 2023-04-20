#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - Search for an integer in an array using a callback function.
 * @array: A pointer to the array to search in.
 * @size: The number of elements in the array.
 * @cmp: A function pointer to the callback function to use for comparison.
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  int i;

  if (array == NULL || cmp == NULL || size <= 0)
    return (-1);

  for (i = 0; i < size; i++)
  {
    if (cmp(array[i]))
      return (i);
  }

  return (-1);
}
