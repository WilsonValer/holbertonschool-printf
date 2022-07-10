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
	int i = 0;
	int j = 0;
	int (*fun)(va_list);

	va_list args;

	va_start(args, format);
	if (format == NULL || !format[i + 1])
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
				{
					fun = get_func(&format[i + 1]);
					j += fun(args);
					i++;
					break;
				}
				case 's':
				{
					fun = get_func(&format[i + 1]);
					j += fun(args);
					i++;
					break;
				}
				case '%':
				{
					fun = get_func(&format[i + 1]);
					j += fun(args);
					i++;
					break;
				}
				default:
				{
					j += _putchar(format[i]);
					j += _putchar(format[i + 1]);
					i++;
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
		i++;
	}
	va_end(args);
	return (j);
}
