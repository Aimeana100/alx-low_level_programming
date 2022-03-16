#include"main.h"
/**
 * print_sign - main entry function
 * description : checks 
 * @n : the ansci code character to be checked
 * Return: -1,1,0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
