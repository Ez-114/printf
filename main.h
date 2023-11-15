#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>

int _putchar(char);
int _puts(const char *str);
int is_specifier(const char *);
int handel_specifier(const char, va_list);
int _printf(const char *format, ...);

#endif
