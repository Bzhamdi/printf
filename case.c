#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* get_func - case function.
* @format: char.
* Return: pointer to function
*
*/
int (*get_func(const char *format))(va_list)
{
	printing p[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	int i;

	for (i = 0; p[i].str != NULL; i++)
	{
		if (*(p[i].str) == *format)
			break;
	}
	return (p[i].fn);

}
