#include "main.h"
/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
char *ptr;
ptr = dest;
ptr++;
while (*src != '\0')
{
(*ptr) = (*src);
src++;
ptr++;
}
(*ptr) = '\0';
return (dest);
}
