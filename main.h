#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int print_char(int);
int print_string(char *);
int print_format(char, va_list);
int _printf(const char *format, ...);

#endif
