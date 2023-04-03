#include "main.h"

/**
 * _memcpy - function copies bytes from memory area to another
 * @dest: input
 * @n: bytes
 * @src: input
 * Return: always 0 correct
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
