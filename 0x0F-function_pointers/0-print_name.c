#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - Print a name using a provided callback function.
 *
 * @name: A pointer to a null-terminated string containing the name to print.
 * @f: A function pointer to a function that takes a char pointer as an argument and returns void.
 */
void print_name(char *name, void (*f)(char *))
{
  if (name == NULL && f != NULL)
  {
    (*f)(name);
  }
}
