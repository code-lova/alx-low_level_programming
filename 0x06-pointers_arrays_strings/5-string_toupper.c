#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @t: input string.
 * Return: the pointer to dest.
 */
char *string_toupper(char *t)
{
	int stg = 0;

	while (*(t + stg) != '\0')
	{
		if ((*(t + stg) >= 97) && (*(t + stg) <= 122))
			*(t + stg) = *(t + stg) - 32;
		stg++;
	}

	return (t);
}
