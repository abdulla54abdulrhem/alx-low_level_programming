#include "main.h"
/**
 * swap_int : just swap
 *
 * @tmp : just var
 *
 */
void swap_int(int *a, int *b)
{
int tmp = (*a);
(*a) = (*b);
(*b) = tmp;
}
