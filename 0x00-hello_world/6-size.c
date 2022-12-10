#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer
 *
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int d;
	long long int e;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
}
