#include"main.h"
/**
 * main - main entry blocks
 * description : Prints alphabetics from a to z
 * with prototype void print_alphabet_x10(void);
 * Return: 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
