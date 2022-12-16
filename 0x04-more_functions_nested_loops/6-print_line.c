#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return
 */
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
