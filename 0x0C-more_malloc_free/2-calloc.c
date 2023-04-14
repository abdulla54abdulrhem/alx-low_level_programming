#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory for an array and initializes it to zero
 *
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 *
 * Return: pointer to the allocated memory or NULL if failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  void *arr;
  unsigned int i;

  arr = malloc(size * nmemb);
  if (nmemb == 0 || size == 0 || arr == NULL)
    return (NULL);

  for (i = 0; i < nmemb; i++)
    {
      arr[i] = 0;
    }

  return (arr);
}
