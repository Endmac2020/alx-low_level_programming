#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence of character
 * @c: character
 * @s: string
 * Return: always 0 correct
 */

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
		return ('\0');
}
