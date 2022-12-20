#include "main.h"

/**
 * swap_int - swap the value of two integers.
 * @a: is the first integer
 * @b: is the secomd integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
