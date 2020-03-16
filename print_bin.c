#include "holberton.h"
#include <stdlib.h>
/**
 * print_b - unsigned int argument is converted to binary
 * @b: unsigned int to binary
 * Return: int length
 */
int print_b(va_list b)
{
	unsigned int nb, max, i, sum = 0;
	unsigned int a[32];
	int len = 0;

	nb = va_arg(b, unsigned int);
	max = 2147483648; /* (2 ^ 31) */
	a[0] = nb / max;
	for (i = 1; i < 32; i++)
	{
		max = max / 2;
		a[i] = (nb / max) % 2;
	}
	for (i = 0; i < 32; i++)
	{
		sum = a[i] + sum;
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			len++;
		}
	}
	return (len);
