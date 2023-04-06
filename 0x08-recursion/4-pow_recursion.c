#include "main.h"

/**
 * _pow_recursion - function that return the value of a num raised to a power
 * @x: input
 * @y: input
 *
 * Return: always correct
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
