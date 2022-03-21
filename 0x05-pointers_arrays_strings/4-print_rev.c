#include "main.h"

/**
 * print_rev - function block
 * descrption: the function that print a reversed string
 * @s: a pointer to a string or array of characters
 */

void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	for(i = 0; i < count; i++)
	{
		_putchar(*(s+i));
	}
	_putchar('\n');

}
