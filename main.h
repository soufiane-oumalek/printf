#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/* Functions */

int _puts(char *str);
int _printf(const char *format, ...);
int _putchar(char c);

/* print functions.c module */
int print_char(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_s(va_list ap, params_t *params);
#endif
