#include "main.h"

/**
 * main - print swap int
 * swap_int: swaps the values of two integers
 * @a: int a
 * @b: int b
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)

{
	int swap;
	int change;

		change = *b;
	 *b = *a;
	*a = change;
}
