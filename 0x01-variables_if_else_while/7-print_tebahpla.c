#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main fuction
 *
 * Return: always 0 (correct)
 */

int main(void)

{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
		return (0);
}
