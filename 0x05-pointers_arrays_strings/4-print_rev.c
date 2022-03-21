#include "main.h"

/**
 * print_rev - function block
 * descrption: the function that print a reversed string
 * @s: a pointer to a string or array of characters
 */

void print_rev(char *s)
{
	int count = 0;

	char stringArr = *s;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	while(count > 0)
	{
		_putchar(stringArr[count--]);
	}
}
