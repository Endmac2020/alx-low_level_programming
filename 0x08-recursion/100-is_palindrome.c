#include "main.h"

int check_pal(char *s, int i, int len);

/**
 * is_palindrome - function that prints empty string
 * @s: string holder
 * Return: if it palindrome 1, if not 0
 */

int is_palindrome(char *s)

{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - returns the lenght of a string
* @s: string to calculate the lenght of
*
* Return: lenght of string
*/

int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
* check_pal - checks the characters
* @s: string to check
* @i: iterator
* @len: lenght of the string
*
* Return: 1 if palindrome,0 if not
*/

int check_pal(char *s, int i, int len)

{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
