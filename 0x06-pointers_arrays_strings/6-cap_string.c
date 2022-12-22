#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @t: input string.
 * Return: the pointer to dest.
 */
char *cap_string(char *t)
{
	int stg = 0, j;
	int seprators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(t + stg) >= 97 && *(t + stg) <= 122)
	{
		*(t + stg) = *(t + stg) - 32;
	}
	stg++;

	while (*(t + stg) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(t + stg) == seprators[j])
			{
				if ((*(t + (stg + 1)) >= 97) && (*(t + (stg + 1)) <= 122))
					*(t + (stg + 1)) = *(t + (stg + 1)) - 32;
				break;
			}
		}
		stg++;
	}
	return (t);
}
