#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Prints a text according number
 * Return: Always (success)
 *
 */
int main(void)
{
	int n, lastd;

	srand(time(0);
	n =  rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
