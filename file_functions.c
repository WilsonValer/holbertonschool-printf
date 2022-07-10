#include "main.h"

/**
*print_char - print the character
*@args: variable
*Return: Always 0.
*/
int print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (-1);
}
/**
*print_str - print the string
*@args: variable
*Return: Always 0.
*/
int print_str(va_list args)
{
	int j;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}
/**
*print_pct - print the percentage
*@args: variable of arguments
*Return: always return
*/
int print_pct(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}







