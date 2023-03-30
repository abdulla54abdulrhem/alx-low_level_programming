#include "main.h"
/**
 * reverse_array - rev array
 * @a : pointer to array
 * @n : size of array 
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
int i;
int tmp;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i -1];
a[n - i - 1] = tmp;
}
}
