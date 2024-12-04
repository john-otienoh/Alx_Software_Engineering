#include "main.h"
#include <stdarg.h>

/**
 * _printf - Function that resembles the printf function
 * @format: A constant string literal.
 *
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	unsigned int n = 0, rValue = 0;
	int putsReturnValue;

	va_list argument;

	va_start(argument, format);

	for (; format[n] != '\0'; n++)
	{
		if (format[n] != '%')
		{
			_putchar(format[n]);
		}
		else if (format[n + 1] == 'c')
		{
			_putchar(va_arg(argument, int));
			n++;
		}
		else if (format[n + 1] == 's')
		{
			putsReturnValue = _puts(va_arg(argument, char *));
			n++;
			rValue += (putsReturnValue - 1);
		}
		else if (format[n + 1] == '%')
		{
			_putchar('%');
			n++;
		}
		else if (format[n + 1] == 'd' || format[n + 1] == 'i')
		{
			_int(va_arg(argument, int));
			n++;
		}
		rValue++;
	}
	return (rValue);
}
