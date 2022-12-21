#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * else another number
 */
int _strcmp(char *s1, char *s2)
{
	int num1 = 0, num2 = 0;

	while (num2 == 0)
	{
		if ((*(s1 + num1) == '\0') && (*(s2 + num1) == '\0'))
			break;
		num2 = *(s1 + num1) - *(s2 + num1);
		num1++;
	}
	return (num2);
}
