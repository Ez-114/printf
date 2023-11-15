#include "main.h"

int print_string(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count += print_char((int)*str);
		str++;
	}
	return (count);
}
