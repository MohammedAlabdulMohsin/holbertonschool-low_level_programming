#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
	unsigned int n1;
	unsigned int divisor;

	if (n < 0)
	{
		_putchar('-');
		n1 = -((unsigned int)n);
	}
	else
	{
		n1 = n;
	}

	divisor = 1;
	while (n1 / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		_putchar((n1 / divisor) + '0');
		n1 %= divisor;
		divisor /= 10;
	}
}
