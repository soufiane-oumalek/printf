#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/* Functions */

int _puts(char *str);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

#endif
