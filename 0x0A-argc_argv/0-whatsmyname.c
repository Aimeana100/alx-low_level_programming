#include"main.h"
#include <stdlib.h>

/**
 * main - intery block
 * description: print the program name
 * @argc: main function arguments
 * @argv: main function array.
 * return: 0, failure
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		while (*argv[0] != '\0')
		{
			_putchar(*argv[0]);
			argv[0]++;
		}
		_putchar('\n');
	}
	return (0);
}
