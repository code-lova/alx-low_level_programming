#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 (Success).
 */

int main(void)
{
	int m = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		m = rand() % 128;
		if ((c + m) > 2772)
			break;
		c = c + m;
		printf("%c", m);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
