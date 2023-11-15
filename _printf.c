#include "main.h"

/**
 * _printf - does as original printf does
 * @format: passed string.
 *
 * Return: number of printed characters
*/
int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list arg_list;

	if (format == NULL)
		return (-1);

	if (!(is_specifier(format))) /* means we have normal string to print */
	{
		char_count += _puts(format);
		return (char_count);
	}

	va_start(arg_list, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
		}
		else if (*format == '%')
		{
			format++;
			char_count += handel_specifier(*format, arg_list);
		}
		format++;
	}

	va_end(arg_list);
	return (char_count);
}
