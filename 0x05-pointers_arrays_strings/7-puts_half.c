#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int stg = 0, j;

	while (stg >= 0)
	{
		if (str[stg] == '\0')
		{
			break;
		}
		stg++;
	}

	if (stg % 2 == 1)
		j = stg / 2;
	else
		j = (stg - 1) / 2;

	for (j++; j < stg; j++)
		_putchar(str[j]);
	_putchar('\n');
}
