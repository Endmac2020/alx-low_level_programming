#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of char
 * @size: size of int in byte
 * @c: character to be initialized
 *
 * Return: null if size is 0, if not pointer to the array
 */

char *create_array(unsigned int size, char c)

{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
