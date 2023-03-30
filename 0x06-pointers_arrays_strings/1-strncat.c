#include "main.h"
/**
 * _strncat - cat 2 strings
 * @dest : pointer to string
 * @src : pointer to string
 * @n : an integer
 *
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
char *startpoint;
char *ptr;
ptr = dest;
startpoint = ptr;
ptr++;
i = 0;
while (i < n && *src != '\0')
{
*ptr = (*src);
src++;
ptr++;
i++;
}
(*ptr) = '\0';
return (startpoint);
}
