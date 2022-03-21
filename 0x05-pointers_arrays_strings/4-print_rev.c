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
	char st = *s;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	for(i = count - 1; i >= 0; i--)
	{
		_putchar( *(st+i) );
	}
	_putchar('\n');

}