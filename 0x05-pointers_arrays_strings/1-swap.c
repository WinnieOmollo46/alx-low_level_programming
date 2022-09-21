#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a : first argument
 * @b : second argument
 *  Description: swaps two integer values
 */

int main(void)
{
	int a;
	int b;

	printf("a=%d,b=%d\n",a,b);
	swap_int(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	return (0);
}
