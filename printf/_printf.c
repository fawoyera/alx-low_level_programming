#include "main.h"
/**
 * _printf - prints formatted arguments passed
 * @format: pointer to format specifiers
 *
 * Return: If Success- number of characters printed to stdout otherwise -1
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, count = 0;
	char *string;

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] != '%')
			_putchar(format[i]), count++;
		if (format[i] == '%')
		{
		i++;
		switch (format[i])
		{
		case 'c':
			_putchar(va_arg(ap, int)), count++;
			break;
		case 's':
			string = va_arg(ap, char*);
			if (string == NULL)
				return (-1);
			while (*string)
				_putchar(*string++), count++;
			break;
		default:
			_putchar(format[i]), count++;
		}
		}
		i++;
	}
	va_end(ap);
	return (count);
}
