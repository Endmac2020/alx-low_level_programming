#include "main.h"
#include <stdio.h>

/**
 * main - function that prints it name
 *
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: always correct
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
