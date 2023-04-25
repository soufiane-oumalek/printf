#ifndef MAIN_H
#define MAIN_H



#define BUFF_SIZE 1024

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>




/*FUNCTIONS*/

int _puts(char *str);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list v);
int print_string(va_list args);
int print_percent(va_list args);

#endif
