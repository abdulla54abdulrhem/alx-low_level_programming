#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value to include in the array.
 * @max: The maximum value to include in the array.
 *
 * Return: If successful - a pointer to the newly created array.
 *         If failure - NULL.
 */
int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
return (NULL);
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
for (i = min; i <= max; i++)
{
arr[i - min] = i;
}
return (arr);
}
