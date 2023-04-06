#include "main.h"

/**
 * _sqrt_recursion - function that prints square root of numbers
 * @n: number to calculate the square root of
 *
 * Return: always at success
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - function to find the natural square root
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: square root
 */

int actual_sqrt_recursion(int n, int i)

{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}
