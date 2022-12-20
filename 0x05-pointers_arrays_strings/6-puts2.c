#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string
 * Return: no return
 */
void puts2(char *str)
{
	int strg = 0; /* counter starts from 0 */

	while (strg >= 0)
	{
		if (str[strg] == '\0')
		{
			-putchar('\n');
			break;
		}
		if (strg % 2 == 0)
		{
			_putchar(str[strg]);
		}
		strg++;
	}
}
