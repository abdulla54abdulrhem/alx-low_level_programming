#include "main.h"
/**
 * int _strlen(char *s) - length of the string
 * @s : pointer to string
 *
 * Return: length of str
 */
int _strlen(char *s)
{
int length = 0;
while(*s != '\0')
{
length ++;
s++;
}
return (length);
}
