#include "main.h"


/**
 * _strncat - concatenate two strings using at most
 *
 * an inputed number of bytes from src.
 *
 * @dest: The string to be appended upon.
 *
 * @src: The string to be appended to dest.
 *
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return; A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)

{

	int indes = 0, dest_len = 0;

	while (dest[indes++])
	dest_len++;
	for (indes = 0; src[indes] && indes < n; indes++)
	dest[dest_len++] = src[indes];
	return (dest);

}
