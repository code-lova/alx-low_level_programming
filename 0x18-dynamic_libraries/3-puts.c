#include "main.h"

/**
 * _puts - print a string to the stdout followed by a new line
 * @str: input string.
 * Return: no return
 */
void _puts(char *str)
{
	int stg = 0; /*start the counter from 0 */

	while (stg >= 0)
	{
		if (str[stg] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[stg]);
		stg++;
	}
}
