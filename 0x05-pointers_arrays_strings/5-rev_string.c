#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input character
 * Return: no return
 */
void rev_string(char *s)
{
	int stg = 0, a, b;
	char *str, prot;

	while (stg >= 0)
	{
		if (s[stg] == '\0')
		{
			break;
		}
		count++;
	}
	str = s;

	for (a = 0; a < (stg - 1); i++)
	{
		for (b = a + 1; b > 0; b--)
		{
			prot = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = prot;
		}
	}
}
