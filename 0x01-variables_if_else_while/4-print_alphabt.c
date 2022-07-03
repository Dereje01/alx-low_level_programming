#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a to z in small letter.
 *
 * Return: Always 0.
 */
int main(void)
{
	char atoz;

	for (atoz = 'a'; atoz <= 'z'; atoz++)
	{
		if (atoz != 'q' && atoz != 'e')
			putchar(atoz);
	}
	printf("\n");

	return (0);
}
