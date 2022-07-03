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
	char AtoZ;

	for (atoz = 'a'; atoz <= 'z'; atoz++)
	{
		putchar(atoz);
	}
		printf("\n");

	for (AtoZ = 'A'; AtoZ <= 'Z'; AtoZ++)
	{
		putchar(AtoZ);
	}
	printf("\n");


	return (0);
}
