#include <stdio.h>

/**
 * add - Computes the sum of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Sum of a and b
 */
double add(double a, double b)
{
	return (a + b);
}

/**
 * subtract - Computes the difference of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Difference of a and b
 */
double subtract(double a, double b)
{
	return (a - b);
}

/**
 * multiply - Computes the product of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Product of a and b
 */
double multiply(double a, double b)
{
	return (a * b);
}

/**
 * divide - Computes the quotient of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Quotient of a and b
 */
double divide(double a, double b)
{
	return (a / b);
}

/**
 * main - Entry point of the simple calculator program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	double a, b;

	while (1)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) == 1)
		{
			if (choice == 0)
			{
				printf("Bye!\n");
				break;
			}
			else if (choice >= 1 && choice <= 4)
			{
				printf("A: ");
				scanf("%lf", &a);
				printf("B: ");
				scanf("%lf", &b);

				if (choice == 1)
					printf("Result: %g\n", add(a, b));
				else if (choice == 2)
					printf("Result: %g\n", subtract(a, b));
				else if (choice == 3)
					printf("Result: %g\n", multiply(a, b));
				else if (choice == 4)
				{
					if (b == 0)
						printf("Error: division by zero\n");
					else
						printf("Result: %g\n", divide(a, b));
				}
			}
			else
			{
				printf("Invalid choice\n");
			}
		}
	}

	return (0);
}
