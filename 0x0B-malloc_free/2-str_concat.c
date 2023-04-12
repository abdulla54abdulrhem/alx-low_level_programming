#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
 */
char *str_concat(char *s1, char *s2)
{
int size1;
int size2;
char *concat;
char *tmp1;
char *tmp2;
int i;
int j;
size1 = 0;
size2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*tmp1 != '\0')
{
size1++;
tmp1++;
}
while (*tmp2 != '\0')
{
size2++;
tmp2++;
}
concat = malloc(sizeof(char) * (size1 + size2) + 1);
if (concat == NULL)
return (NULL);
for (i = 0; i < size1; i++)
{
concat[i] = s1[i];
}
for (j = 0; j < size2; j++)
{
concat[i+j] = s2[j];
}
concat[i+j] = '\0';
return (concat);
}
