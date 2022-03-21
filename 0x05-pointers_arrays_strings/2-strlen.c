#include "main.h"

/**
 * _strlen - function block
 * descrption: the function that return the length of a string
 * @s: a pointer to a string or array of characters
 * return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
