#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a double: %lf byte(s)\n", sizeof(double));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a float: %f bytes\n", sizeof(float));
	return (0);
}
