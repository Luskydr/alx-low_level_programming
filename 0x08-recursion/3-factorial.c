#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: the number to calculate te factorial
 *
 * Return: integer value
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}