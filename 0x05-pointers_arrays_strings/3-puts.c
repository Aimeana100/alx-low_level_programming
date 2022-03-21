#include "main.h"

/**
 * _puts - function block
 * descrption: the functions that print out the string
 * @str: a pointer to a string or array of characters
 */

void _puts(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
