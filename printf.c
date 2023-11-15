#include "main.h"

int _printf(const char *format, ...)
{
	va_list arg_list;
	int count = 0;

	va_start(arg_list, format);
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), arg_list);
		else
			write(1, format, 1);
		format++;
	}
	va_end(arg_list);
	return (count);
}
