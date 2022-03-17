#include"main.h"
/**
 * print_last_digit - main entry function
 * description : print the last digit of a number
 * @n : the ansci code character to be checked
 * Return: loop
 */
int print_last_digit(int n)
{
	_putchar(n < 0 ? (n % 10) * -1 : n);
	return (n < 0 ? n % 10 : n);
}
