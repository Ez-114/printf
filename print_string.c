#include "main.h"

/**
 * _puts - prints passed string
 * @str: pointer pointing to string variable
 *
 * Return: number of printed chars
*/

int _puts(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; *(str + i) != 0; i++)
	{
		_putchar(*(str + i));
	}
	return (i);
}
