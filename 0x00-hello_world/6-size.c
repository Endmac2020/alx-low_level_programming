#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %c bytes\n", Sizeof('char'));
	printf("Size of an int: %d bytes\n", Sizeof('int'));
	printf("Size of a double: %lf bytes\n", Sizeof('double'));
	printf("Size of a long int: %ld bytes\n", Sizeof('long int'));
	printf("Size of a float: %f bytes\n", Sizeof('float'));
	return (0);
}
