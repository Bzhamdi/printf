#include "holberton.h"
#include <stdio.h>
/**
 * print_r - print string in reverse
 * @r: string to reverse print
 * Return: lenth printed
*/
int print_r(va_list r)
{
	char *c;
	int i = 0, j, len = 0;

	c = va_arg(r, char *);
	if (c == NULL)
		c = ")llun(";
	while (c[i] != '\0')
		i++;
	for (j = i; j >= 0; j--)
	{
		_putchar(c[j]);
		len++;
	}
	return (len);
}
