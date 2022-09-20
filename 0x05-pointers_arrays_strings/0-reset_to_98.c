#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - function to reset var
 * @n : the argument
 * Description: print out result
 * Return: nothing
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
