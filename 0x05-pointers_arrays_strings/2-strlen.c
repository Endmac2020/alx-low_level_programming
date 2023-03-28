#include "main.h"
#include <string.h>

/**
 * _strlen: return the lenght of a
 * @s: string
 * Return: always 0
 */

int _strlen(char *s)

{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
