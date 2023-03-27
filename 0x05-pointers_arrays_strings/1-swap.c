#include "main.h"
/**
 * swap_int - just swap
 *
 * @a : in tpointer
 * @b : int pointer
 *
 *
 */
void swap_int(int *a, int *b)
{
int tmp = (*a);
(*a) = (*b);
(*b) = tmp;
}
