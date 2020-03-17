#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct printing - print types.
 * @str:char types.
 * @fn: function.
 *
 */
typedef struct printing
{
char *str;
int (*fn)(va_list);
} printing;
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_b(va_list b);
int print_u(va_list u);
int print_x(va_list x);
int print_x_upper(va_list x);
int print_S(va_list x);
int print_o(va_list o);
int _putchar(char c);
int (*get_func(const char *format))(va_list);
#endif
