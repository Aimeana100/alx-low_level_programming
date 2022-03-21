#include "main.h"

/**
 * swap_int - functions to swap 2 intigers
 * description: swap 2 integers using pointers
 * @a: first intiger parameter to swap
 * @b: second parameter to swap
 * return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

