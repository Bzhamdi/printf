#include "holberton.h"
#include <stdlib.h>
/**
 * print_u - print an unsigned int
 * @u: to print
 * Return: the length
*/
int print_u(va_list u)
{
	unsigned nb, ddiv, num = 1, len = 0;;

	nb = va_arg(u,unsigned int);
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
 * @n: unsigned int
 * Return: length printed
*/
int print_x(va_list x)
{
	unsigned int a[8];
	unsigned int nb,i, num = 0, sum = 0;
	char diff;
	int len = 0;

	num = 268435456;
	nb = va_arg(x, unsigned int);
	diff = 'a' - ':';
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
 * print_x_upper - print on hexa form
 * @n: unsigned int
 * Return: length printed
*/
int print_x_upper(va_list x)
{
        unsigned int a[8];
        unsigned int nb,i, num = 0, sum = 0;
        char diff;
        int len = 0;

        num = 268435456;
        nb = va_arg(x, unsigned int);
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
