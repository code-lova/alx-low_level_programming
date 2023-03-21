#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *ghaystack;
	char *mneedle;

	while (*haystack != '\0')
	{
		ghaystack = haystack;
		mneedle = needle;

		while (*haystack != '\0' && *mneedle != '\0' && *haystack == *mneedle)
		{
			haystack++;
			mneedle++;
		}
		if (!*mneedle)
			return (ghaystack);
		haystack = ghaystack + 1;
	}
	return (0);
}
