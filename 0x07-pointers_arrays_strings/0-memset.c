#include "main.h"

/**
 * _memset - function that fills the first bytes of the memory area
 * @s: pointer
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 correct
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
