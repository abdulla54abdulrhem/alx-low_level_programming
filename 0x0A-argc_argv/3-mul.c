#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 * main - main function
 * @argc : integer
 * @argv : argumnet vector
 * Return: 0 or 1
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
int tmp;
if (argc != 3)
{
printf("Error\n");
return (1);
}
tmp = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n",tmp);
return (0);
}
