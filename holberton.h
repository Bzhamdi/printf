#ifndef HOLBERTON_H
#define HOLBERTON_H
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
int _putchar(char c);
#endif
