#include "main.h"
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
if (argc != 3)
{
printf("Error\n");
return (1);
}
int tmp;
tmp = argv[1] * argv[2];
printf("%d\n",tmp);
return (0);
}
