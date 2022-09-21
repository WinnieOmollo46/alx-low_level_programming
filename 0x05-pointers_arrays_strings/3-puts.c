#include "main.h"

/**
 * _puts - function that prints a string
 *  @str : argument to function
 *  Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
