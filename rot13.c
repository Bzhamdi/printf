#include "holberton.h"
#include <stdlib.h>
int print_R(va_list R)
 {
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	unsigned int i, j;
int nb;
char *str;
   	i = 0;
        j = 0;
	nb = 0;
	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (i = 0; str[i]; i++)
	{
		if (!a[j])
                {
                        _putchar(str[i]);
                        nb++;
                }
		for (j = 0; a[j]; j++)
		{
			if (a[j] == str[i])
			{
				_putchar(b[j]);
				nb++;
				break;
			}
		}
	}
	return (nb);
}
