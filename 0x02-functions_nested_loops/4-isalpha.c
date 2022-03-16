#include"main.h"
/**
 * _isalpha - main entry blocks
 * description : checks a lowercase letter
 * @c : the ansci code character to be checked
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
