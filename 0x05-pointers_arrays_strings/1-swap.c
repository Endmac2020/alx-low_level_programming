#include "main.h"

/**
 * swap_int - swaps the  values of a and b
 * @a: first int to be used
 * @b: second int to be used
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)

{
	int s;

	s = *a;

	*a = *b;
	*b = s;
}
