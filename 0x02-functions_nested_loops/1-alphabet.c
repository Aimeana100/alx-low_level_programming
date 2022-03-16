#include"main.h"
/**
 * print_alphabet_x10 - print_alphabet_x10 entry blocks
 * description : Prints alphabetics from a to z
 * with prototype print_alphabet_x10(void);
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
