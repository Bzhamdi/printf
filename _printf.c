#include "holberton.h"
#include <stdlib.h>
/**
 * _printf - produces output according to a format
 * @format: string composed of zero or more directives
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
	va_list lst;
	int (*func)(va_list);

	va_start(lst, format);
	while (format != NULL && format[i] != '\0')
	{
		while (format[i] && format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			len++;
		}
		if (!format[i])
			return (len);
		func = get_func(&format[i + 1]);
		if (func != NULL)
		{
			len = len + func(lst);
			i = i + 2;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i = i + 2;
				len++;
			}
			else
				i++;
		}
	}
	if (format == NULL)
		return (-1);
	va_end(lst);
	return (len);
}
