#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int e;

	for (d = 0; d < 100; d++)
	{
		for (e = 0; e < 100; e++)
		{
		putchar("d%d%", d, e);
		}
			putchar(',');
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
