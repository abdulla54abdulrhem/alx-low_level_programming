#include "main.h"
/**
 * _strcpy - copy 2 strings
 * @dest : ptr
 *@src : ptr
 * Return : pointer to char
 *
 */
char *_strcpy(char *dest, char *src)
{
char *tmp = dest;
while ((*src != '\0'))
{
(*tmp) = (*src);
src++;
tmp++;
}
return dest;
}
