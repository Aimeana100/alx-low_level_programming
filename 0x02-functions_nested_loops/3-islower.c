#include"main.h"
/**
 * _islower - main entry blocks
 * description : checks a lowercase letter
 * Return: 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
