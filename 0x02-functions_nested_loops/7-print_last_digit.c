#include"main.h"
/**
 * print_last_digit - main entry function
 * description : print the last digit of a number
 * @n : the ansci code character to be checked
 * Return: loop
 */
int print_last_digit(int n)
{

	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = n % 10;

	_putchar(nv + '0');
	return (nv);
}
