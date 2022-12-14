#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int a1, a2, ij, afb;

	a1 = 1;
	a2 = 2;
	ij = afb = 0;
	while (ij <= 4000000)
	{
		ij = a1 + a2;
		a1 = a2;
		a2 = afb;
		if ((a1 % 2) == 0)
		{
			afb += a1;
		}
	}
	printf("%ld\n", afb);
	return (0);
}
