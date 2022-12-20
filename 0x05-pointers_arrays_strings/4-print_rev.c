#include "main.h"

/**
 * print_rev - print a string in reverse followed by a new line
 * @s: input character
 * Return: no return
 */
void print_rev(char *s)
{
	int stg = 0; /* set the couter varable to 0 */

	while (stg >= 0)
	{
		if (s[stg] == '\0')
		{
			break;
		}
		stg++;
	}

	for (stg--; stg >= 0; stg--)
		_putchar(s[stg]);
	_putchar('\n');
}
