#include "holberton.h"
#include <stdlib.h>
/**
 * print_x_upp - prints the string.
 * @x: unsigned int
 * Return: length printed
 */
int print_x_upp(unsigned int x)
{
	unsigned int a[8];
	unsigned int nb, i, num = 0, sum = 0;
	char diff;
	int len = 0;

	num = 268435456;
	nb = x;
	diff = 'A' - ':';
	a[0] = nb / num;
	for (i = 1; i < 8; i++)
	{
		num = num / 16;
		a[i] = (nb / num) % 16;
	}
	for (i = 0; i < 8; i++)
	{
		sum = sum + a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + diff + a[i]);
			len++;
		}
	}
	return (len);
}
/**
 * print_S - prints the string.
 * @S: unsigned int
 * Return: length printed
 */
int print_S(va_list S)
{
	int nb = 0;
	int i = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			nb += 2;
			nb += print_x_upp(str[i]);
		}
		else
		{
			_putchar(str[i]);
			nb++;
		}
		i++;
	}
	return (nb);
}
