#include "main.h"

/**
 * _puts - function block
 * descrption: the functions that print out the string
 * @str: a pointer to a string or array of characters
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
