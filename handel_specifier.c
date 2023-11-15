#include "main.h"

/**
 * handel_specifier - handel passed format specifier.
 * @value: passed character format specifier.
 * @ap: arg_list current passed value.
 *
 * Return: printed characters.
*/
int handel_specifier(const char value, va_list ap)
{
	int char_count = 0;

	switch (value)
	{
		case 'c':
			char_count += _putchar(va_arg(ap, int));
			break;
		case 's':
			char_count += _puts(va_arg(ap, char *));
			break;
		case '%':
			char_count += _putchar('%');
			break;
		default:
			char_count += _putchar('%');
			char_count += _putchar(value);
			break;
	}
	return (char_count);
}
