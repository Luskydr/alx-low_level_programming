#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - prints a text according to number
 * Return: 0
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (lastd == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (last < 6 && lastd != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n, n, lastd);
	}
	retrun (0);
}
