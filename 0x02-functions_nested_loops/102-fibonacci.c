#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int c; 
	long int a1, a2, ij;

	a1 = 1;
	a2 = 2;
	printf("%ld, %ld", a1, a2);
	for (c = 0; c < 48; c++)
	{
		ij = a1 + a2;
		printf(", %ld", ij);
		a1 = a2;
		a2 = ij;
	}
	printf("\n");
	return (0);
}
