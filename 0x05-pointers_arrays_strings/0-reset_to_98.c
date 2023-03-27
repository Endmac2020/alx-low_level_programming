#include "main.h"

/* main - update the value of n
 *
 * Return: always 0 correct
 */

int main(void)
{
	int n;

	        n = 402;
		printf("n=%d\n", n);
		reset_to_98(&n);
		printf("n=%d\n", n);
		return (0);

}
