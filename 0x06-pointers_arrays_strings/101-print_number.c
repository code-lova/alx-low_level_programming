#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int i, j, numb;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	numb = 1;

	while (j > 9)
	{
		j /= 10;
		numb *= 10;
	}

	for (; numb >= 1; numb /= 10)
	{
		_putchar(((i / numb) % 10) + 48);
	}
}
