#include "function_pointers.h"

/**
 * print_name - prints a name using a given function pointer
 * @name: name to print
 * @f: pointer to function that prints a char pointer
 *
 * Return: Nothing.
 */
#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a given function pointer
 * @name: name to print
 * @f: pointer to function that prints a char pointer
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
