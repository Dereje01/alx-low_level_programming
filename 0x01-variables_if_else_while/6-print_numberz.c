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
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
