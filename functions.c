#include "holberton.h"
#include <stdlib.h>
/**
 * print_c - print (char)
 * @c:char.
 * Return:1
 */

int print_c(va_list c)
{
	char str = (char)va_arg(c, int);
	_putchar(str);
	return (1);
}

/**
 * print_s - print (string)
 * @s: String.
 * Return: number of printed chars.
 */
int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;
	if (str == NULL)
		str = "(null)";
	for (; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

