#include "main.h"
#include <unistd.h>

/**
 * _putchar. Writes the character c to the output
 * @c; The character to print
 *
 * Return; Returns 1, on success.
 * On error it returns 1. Sets errno appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c 1));
}

