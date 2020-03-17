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
                        nb += print_x_upper(str[i]);
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
