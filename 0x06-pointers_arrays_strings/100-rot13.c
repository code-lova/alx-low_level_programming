#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int stg = 0, i;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + stg) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + stg) == alp[i])
			{
				*(s + stg) = rot13[i];
				break;
			}
		}
		stg++;
	}
	return (s);
}
