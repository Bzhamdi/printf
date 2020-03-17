#include "holberton.h"
#include <stdlib.h>
/**
 * print_u - print an unsigned int
 * @u: to print
 * Return: the length
*/
int print_u(va_list u)
{
	unsigned int nb, ddiv, num = 1, len = 0;

	nb = va_arg(u, unsigned int);
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
/**
 * print_x - print on hexa form
 * @x: unsigned int
 * Return: length printed
*/
int print_x(va_list x)
{
	unsigned int nb, quotient, remainder, len = 0;
	int i, j = 0;
	char hexadecimalnum[100];

	nb = va_arg(x, unsigned int);
	quotient = nb;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 87 + remainder;
		quotient = quotient / 16;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(hexadecimalnum[i]);
		len++;
	}
	return (len);
}
/**
 * print_x_upper - print on hexa form
 * @x: unsigned int
 * Return: length printed
*/
int print_x_upper(va_list x)
{
	unsigned int nb, quotient, remainder, len = 0;
	int i, j = 0;
	char hexadecimalnum[100];

	nb = va_arg(x, unsigned int);
	quotient = nb;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 55 + remainder;
		quotient = quotient / 16;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(hexadecimalnum[i]);
		len++;
	}
	return (len);
}
