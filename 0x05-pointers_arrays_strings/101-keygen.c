#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 (Success).
 */

int main(void)
{
	int rm = 0, ck = 0;
	time_t tm;

	srand((unsigned int) time(&tm));
	while (ck < 2772)
	{
		rm = rand() % 128;
		if ((ck + rm) > 2772)
			break;
		ck = ck + rm;
		printf("%c", rm);
	}
	printf("%c\n", (2772 - ck));
	return (0);
}
