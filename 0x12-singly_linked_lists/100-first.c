#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - Prints a specific message before main function.
 */
void print_before_main(void)
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}

int main(void)
{
    /* Your main function code */
    return (0);
}
