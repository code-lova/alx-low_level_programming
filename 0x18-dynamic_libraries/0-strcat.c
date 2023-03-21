#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int num1 = 0, num2 = 0;

	while (*(dest + num1) != '\0')
	{
		num1++;
	}
	while (num2 >= 0)
	{
		*(dest + num1) = *(src + num2);
		if (*(src + num2) == '\0')
			break;
		num1++;
		num2++;
	}
	return (dest);
}
