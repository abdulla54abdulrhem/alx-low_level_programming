#include "main.h"
/**
 * _strcat - function to cat 2 string
 * @dest : pointer to string
 * @src : pointer to string
 *
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
ptr++;
while (*src != '\0')
{
(*ptr) = (*src);
src++;
ptr++;
}
(*ptr) = '\0';
return (ptr);
}
