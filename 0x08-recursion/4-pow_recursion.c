#include "main.h"

/**
 * _pow_recursion - the power of a number
 *
 * @x: the value to multiply
 * @y: the times to multiply the value
 *
 * Return: the reult of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1)
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
