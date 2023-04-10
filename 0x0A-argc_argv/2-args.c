#include <stdio.h>
#include "main.h"

/**
 * main - function that prints all arguments
 * @argc: number of arguments
 * @argv:argument vector
 *
 * Return: always correct
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
