#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: a program that prints a number of base 16
 *Return: 0
 */
int main(void)
{
	char c = 0;


	while (c <= 10)
	{
		putchar(48 + c);
		if(c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}


	putchar('\n');
	return (0);
}