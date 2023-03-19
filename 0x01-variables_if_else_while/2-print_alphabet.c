#include <stdio.h>
/*
 * main: c program that prints lowercase alphabet
 *
 * Return:always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
