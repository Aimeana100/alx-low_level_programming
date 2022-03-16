#include"main.h"
/**
 * main - main entry blocks
 * description : Prints an emulated functional
 * performance of putchar using _putchar
 * Return: 0
 */
int main(void)
{
	char c[8] = "_putchar";

	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
