#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - check the code
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;

	}

	putchar('\n');
	return (0)
}