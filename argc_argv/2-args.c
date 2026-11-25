#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed to the program, one per line
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
