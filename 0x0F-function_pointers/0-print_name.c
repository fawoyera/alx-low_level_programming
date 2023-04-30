#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: the name to print
 * @f: pointer to function that prints name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
