#include "variadic_functions.h"
/**
 * print_all - print anything passed in as argument
 * @format: format specifiers for arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *specifier, *string;

	specifier = "cifs";
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (specifier[j])
		{
		if (format[i] == specifier[j])
		{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			string = va_arg(ap, char*);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string);
		} switch (format[i + 1])
		{
		case '\0':
			printf("\n");
			break;
		default:
			printf(", ");
		} break;
		} j++;
		} i++;
	} va_end(ap);
}
