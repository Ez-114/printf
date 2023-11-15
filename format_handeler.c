#include "main.h"

int print_format(char spec, va_list arg_list)
{
	int count = 0;

	if (spec == 'c')
		count += print_char(va_arg(arg_list, int));
	else if (spec == 's')
		count += print_string(va_arg(arg_list, char *));
	else if (spec == '%')
		count += write(1, &spec, 1);
	else
		count += write(1, &spec, 1);

	return (count);
}
