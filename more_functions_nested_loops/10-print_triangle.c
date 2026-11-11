#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int row, col, spaces;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces > 0; spaces--)
			{
				_putchar(' ');
			}
			for (col = 0; col < row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
