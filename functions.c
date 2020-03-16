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
/**
 * print_i - print (int)
 * @i: int
 * Return: number of printed ints
*/
int print_i(va_list i)
{
	int nb, ddiv, num = 1, len = 0;

	nb = va_arg(i, int);
	if (nb < 0)
	{
		_putchar('-');
		len++;
		nb = -1 * nb;
	}
	ddiv = nb;
	while ((ddiv / 10) != 0)
	{
		ddiv = ddiv / 10;
		num = num * 10;
	}
	while (num > 0)
	{
		_putchar((nb / num) + '0');
		len++;
		nb = nb % num;
		num = num / 10;
	}
	return (len);
}
