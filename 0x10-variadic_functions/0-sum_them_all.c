#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		add += va_arg(ap, int);

	va_end(ap);
	return (add);
}
