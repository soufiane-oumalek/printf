#include "main.h"
/**
 * _puts - print string
 * @str: the pointer to string
 * Return: len
 */
int _puts(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		len++;
		str++;
	}
	return (len);
}
/**
 * _printf - print function
 * @format: format
 * Return: print chars
 */
int _printf(const char *format, ...)
{
	int count = 0;
	char *str;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case '\0':
					return (-1);
				case 'c':
					count += _putchar(va_arg(args, int));
						break;
				case 's':
					str = va_arg(args, char*);
					if (str == NULL)
						str = "(null)";
					count += _puts(str);
					break;
				default:
					if (*format != '%')
						count += _putchar('%');
					count += _putchar(*format);
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
