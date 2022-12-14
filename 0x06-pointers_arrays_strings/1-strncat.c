#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int num1 = 0, num2 = 0; /* initialize num1 and num2  to 0 */

	while (*(dest + num1) != '\0')
	{
		num1++;
	}

	while (num2 < n)
	{
		*(dest + num1) = *(src + num2);

		if (*(src + num2) == '\0')
		{
			break;
		}
		num1++;
		num2++;
	}

	return (dest);
}
