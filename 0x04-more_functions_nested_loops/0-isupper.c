#include "main.h"

/**
 * _isupper - check the code
 * description : check that a character is an upper case character
 * return : 0,1
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
