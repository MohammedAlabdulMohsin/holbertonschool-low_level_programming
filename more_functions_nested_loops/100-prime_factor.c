#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long divisor = 2;
	unsigned long largest = 0;

	while (n > 1)
	{
		if (n % divisor == 0)
		{
			largest = divisor;
			n /= divisor;
		}
		else
		{
			divisor++;
		}
	}

	printf("%lu\n", largest);

	return (0);
}
