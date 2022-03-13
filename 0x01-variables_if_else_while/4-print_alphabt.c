#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry block
 * Description: alphabets in lower and upper
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
