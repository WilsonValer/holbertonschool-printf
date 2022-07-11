#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
*_printf - check the code
*@format: variable
*Return: Always 0.
*/
int _printf(const char *format, ...)
{
int i = 0, lent = 0, r = 0;

funtion_print g = {0, NULL};
va_list args;

if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
if (format[0] == '\0')
return (0);
va_start(args, format);

while (format[i] != '\0')
{
if (format[i] == '%')
{
g = compare_specifier(format[i + 1]);
if (g.indicator == 1)
{
r = g.play(args);
lent += r + 1;
i += 2;
continue;
}
_putchar('%');
lent++;
}
else
{
_putchar(format[i]);
lent++;
}
i++;
}
va_end(args);
return (lent);
}
