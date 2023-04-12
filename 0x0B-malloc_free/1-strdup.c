#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
int len;
int i;
char *cpy;
char *tmp;
tmp = str;
len = 0;
if (str == NULL)
return (NULL);
while (*tmp != '\0')
{
len++;
tmp++;
}
cpy = malloc(sizeof(char) * len + 1);
if (cpy == NULL)
return (NULL);
for (i = 0; i < len; i++)
cpy[i] = str[i];
return (cpy);
}
