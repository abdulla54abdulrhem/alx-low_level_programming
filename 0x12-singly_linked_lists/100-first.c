#include <stdio.h>

/**
 * first - Function executed before main.
 *
 * Description: This function uses the constructor attribute to specify that
 * it should be executed before main(). It prints a message to the standard
 * output.
 *
 * Return: void.
 */
void first(void) __attribute__((constructor));

void first(void)
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}
