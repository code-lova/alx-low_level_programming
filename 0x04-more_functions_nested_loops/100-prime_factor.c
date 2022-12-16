#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int j, pn;

	j = 612852475143;
	for (pn = 2; pn <= j; pn++)
	{
		if (j % pn == 0)
		{
			n /= pn;
			pn--;
		}
	}
	printf("%ld\n", pn);
	return (0);
}
