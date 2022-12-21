#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array.
 * @n: number of elements of the array
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int m, b, temp;

	for (m = 0; m < n - 1; m++)
	{
		for (b = m + 1; b > 0; b--)
		{
			temp = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = temp;
		}
	}
}
