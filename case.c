#include "holberton.h"
#include <stdlib.h>
/**
* get_func - case function.
* @format: char.
* Return: pointer to function
*
*/
int (*get_func(const char *format))(va_list)
{
	unsigned int i = 0;
	printing p[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
			};
	for (; p[i].str != NULL; i++)
	{
		if (*(p[i].str) == *format)
			break;
	}
	return (p[i].fn);
}

