#include <stdio.h>
#include "main.h"

/**
 * main - prints number of argument
 * @argc: number of argument
 * @argv: argument vector
 *
 * Return: always correct
 */

int main(int argc, char *argv[])

{
(void) argv; /* ignore argv */

	printf("%d\n", argc - 1);
	return (0);
}
