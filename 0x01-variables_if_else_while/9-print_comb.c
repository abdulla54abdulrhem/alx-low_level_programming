#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i == 9)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
