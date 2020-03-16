/**
 * print_o - print an unsigned int in octal.
 * @o: unsigned int
 *
 * Return: number octal printed
 *
 */
int print_o(va_list o)
{
unsigned int num;
unsigned int count;
unsigned int octalNumber[100], i = 1, j;
num = va_arg(o, unsigned int);
while (num != 0)
{
octalNumber[i++] = num % 8;
num  = num / 8;
}
count = 0;
for (j = i - 1; j > 0; j--)
{
putchar('0' + octalNumber[j]);
count++;
}
return (count);
}
