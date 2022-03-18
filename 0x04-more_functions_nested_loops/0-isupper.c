#include "main.h"

/**
 * _isupper - functional block
 * description : checks if a character is upper
 * case
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
