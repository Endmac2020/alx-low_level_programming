#include "main.h"

/**
 * _strlen_recursion - function that prints lenght of a string
 * @s: the string to be measured
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)

{
	int longit = 0;

	if (*s)

	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
