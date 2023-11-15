#include "main.h"

/**
 * is_specifier - check if '%' is present in a string.
 * @str: passed str
 *
 * Return: 1 if true, 0 if false.
*/
int is_specifier(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '%')
			return (1);
		i++;
	}
	return (0);
}
