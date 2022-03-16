#include"main.h"
/**
 * print_sign - main entry function
 * description : checks 
 * @n : the ansci code character to be checked
 * Return: -1,0,1
 */
int print_sign(int n)
{
	if(n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else if(n > 0)
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
