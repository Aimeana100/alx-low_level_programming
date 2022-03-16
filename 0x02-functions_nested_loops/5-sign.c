#include"main.h"
/**
 * print_sign - main entry function
 * description : checks 
 * @c : the ansci code character to be checked
 * Return: -1,0,1
 */
int print_sign(int c)
{
	if(c < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else if(c > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
}
