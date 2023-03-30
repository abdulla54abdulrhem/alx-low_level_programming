#include "main.h"
/**
 * string_toupper - to uppercase
 * @s : string pointer
 *
 *
 */
char *string_toupper(char *s)
{
char *tmp;
tmp = s;
while((*s) != '\0')
{
if ((*s) >= 'a' && (*s) <= 'z')
(*s) = (*s) - 32;
s++;
}
return (tmp);
}
