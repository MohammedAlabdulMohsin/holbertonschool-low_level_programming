#include <stdio.h>

/**
 * main - Prints base 10 numbers using putchar without char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
