#include "variadic_functions.h"
/**
 * print_all - print anything passed in as argument
 * @format: format specifiers for arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j, flag = 0;
	char *specifier, *string;

	specifier = "cifs";
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (specifier[j])
		{
		if (format[i] == specifier[j] && flag)
		{
			printf(", ");
			break;
		} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), flag = 1;
			break;
		case 'i':
			printf("%i", va_arg(ap, int)), flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), flag = 1;
			break;
		case 's':
			string = va_arg(ap, char*);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string), flag = 1;
			break;
		} i++;
	}
	printf("\n");
	va_end(ap);
}
